#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <stdlib.h>

int main(){

    FILE *fptr;

    fptr = fopen("attempt.txt", "r");

    fclose(fptr);

    free(fptr);

    fptr = NULL;


    return 0;
}
