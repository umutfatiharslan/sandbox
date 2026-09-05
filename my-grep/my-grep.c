#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
      
    //the main input order example: grep "search_word" filename.txt 

    if (argc != 3){

        printf("wrong input. an example input scheme: grep \"search_word\" filename.txt");
        
        return (-1);  
    }    

    
    FILE *fptr;

    fptr = fopen(argv[2], "r");  

    if (fptr == NULL){
        printf("the file couldnt open, exit code -1\n");
        exit (-1);
    }


    char *buffer;

    int occurence_times=0;

    buffer = calloc (100, sizeof(char)); //100 chars of space allocated for testing purposes
   

    while (fgets(buffer, 100, fptr) != NULL){  //get every character into buffer

        char *match = strstr(buffer, argv[1]);

        if (match != NULL){ 

            printf("%s", buffer);
        }
    }
    

    return 0;

}
