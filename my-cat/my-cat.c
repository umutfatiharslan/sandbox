//this linux command program i coded uses a flexible buffer while reading characters from a text file,
//hence its vulnerable to possible DOS attacks. i decided to move onto a version which will use a
//fixed buffer instead, which ll increase the programs safety and also efficiency in terms of time used up
//per resource. this program comes in handy when reading text files which grows or shrinks over time (unstable)
//while the program is running
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    FILE *fptr;

    char *buffer, *realloc_check;

    int x_tenth, status, char_count=0;

    buffer = calloc (10, sizeof(char));

    fptr = fopen(argv[1], "r"); //open the first argument which is a directory to a text file

    if (fptr == NULL){
        printf("file couldnt open");
        return(-1);
    }

    for ( x_tenth=1 ; ; x_tenth++ ){

        int is_file_over = 0;

        for(int j=0; j<10; j++){

            status = fscanf(fptr, "%c", &buffer[j + (x_tenth-1) * sizeof(char) * 10]);

            if (status == EOF){
                is_file_over = 1;
                break;
            }

            char_count++;

        }
        
        if(is_file_over == 1)
            break;

        realloc_check = realloc(buffer ,(x_tenth+1) * sizeof(char) * 10);
        buffer = realloc_check;

        if (realloc_check == NULL){
            printf("memory reallocation error.");
            exit (-1);
        }

        else continue;

    }

    printf("heres the read output:\n");

    for (int i=0; i<char_count; i++){
    

        printf("%c", *(buffer+i));

    }

    fclose(fptr);

    fptr = NULL;

    return 0;
}
