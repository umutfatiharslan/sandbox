//exercise 1-17 print the input lines that are longer than 80 characters 
#include <stdio.h>
#define MAXLENGTH 1000

int getline(char array[]);

int main(){
	int c, length=0;
	char arr[MAXLENGTH];

	do{
		length=getline(arr);
		if (length>80)
			printf("%s", arr);

	}while(length!=0);
	
	return 0;
}

int getline(char array[]){
	int c=0, i=0;
	while((c=getchar())!=EOF && c!='\n'){
		array[i]=c;
		++i;
	}
	return i;
}


