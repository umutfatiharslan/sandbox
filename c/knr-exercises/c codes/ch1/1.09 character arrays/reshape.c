//exercise 1-18
#include <stdio.h>
#define MAXLENGTH 1000

int getline(char array[]);

int main(){
	int len, c=0;
	char arr[MAXLENGTH], length=0;
	do{
		len = getline(arr);
		for(int i=len-1; arr[i]==' ' || arr[i]=='\t'; i--)
			arr[i] = '\0';
		if(len!=0)
			printf("the form trailing blanks, tabs and new lines ignored: %s#\n", arr);
	}while(len!=0);
	
	
	return 0;
}

int getline(char array[]){
	int i=0, c=0;
	for(i=0; (c=getchar())!=EOF && c!='\n'; ++i)
		array[i] = c;
	array[i] = '\0';
	return i;
}