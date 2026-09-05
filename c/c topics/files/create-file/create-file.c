#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>

int main(){

    FILE *fptr;

    fptr = fopen("attempt.txt", "w");

    fprintf(fptr, "hello world\n");

    fclose(fptr);

    free(fptr);

    fptr = NULL;


    return 0;
}
