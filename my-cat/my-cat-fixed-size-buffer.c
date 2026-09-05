//this linux command program i coded uses a fixed size buffer which will increase the efficiency and also security  
//of the program compared to its flexible buffer sized version i coded earlier. because in this scenario, 
//i assumed that the command will get txt files as an argument which are smaller than the size of x (?)
//this program comes in use in scenarios when user wants to read from a fixed-sized (stable) text files
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    FILE *fptr;

    char buffer[10], *realloc_check;

    int x_tenth, status, char_count=0, j=0, is_file_over=0;

    fptr = fopen(argv[1], "r"); //open the first argument which is a directory to a text file

    if (fptr == NULL){  //if file couldnt open print the error on the screen and terminate the program
        printf("file couldnt open");
        return(-1);
    }

    printf("heres the read output:\n");
    
    while(is_file_over != 1){ //keep reading from the text file which is an initial argument the user enters while 
                              //running the program until the 10 character sized buffer fills up on space, and 
                              //print it on the screen. keep doing that until it reaches the EOF indicator of the 
                              //text file.
        for(j=0; j<10; j++){

            status = fscanf(fptr, "%c", &buffer[j]);

            if(status == EOF){
                is_file_over = 1;
                break;
            }
            
            printf("%c", buffer[j]);
            char_count++;

        }
    }

    printf("\nchar count: %d", char_count);

    fclose(fptr);

    fptr = NULL;

    return 0;
}
