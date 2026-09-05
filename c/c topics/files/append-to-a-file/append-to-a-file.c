#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>

int main(){

    FILE *fptr;

    fptr = fopen("attempt.txt", "a");

    fprintf(fptr, "its nice to see you...\n");

    fclose(fptr);

    free(fptr);

    fptr = NULL;


    return 0;
}
