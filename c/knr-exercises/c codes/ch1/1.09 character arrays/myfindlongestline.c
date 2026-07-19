#include <stdio.h>
#define MAXLENGTH 1000

int getline(char array[]);
void copy(char array[], char longest[]);

int main(){

	char arr[MAXLENGTH], longest[MAXLENGTH];
	int length=0, max=0;
	
	
	for( ; ; ){
		length = getline(arr);
		printf("current length: %d\n", length);
		if(length==0) break;
		else if(length>max){
			max=length;
			copy(arr, longest);
			arr[0] = '\0';
		}
	}
	
	printf("\nlongest line: %s\n", longest);
	printf("length of the longest line: %d", max);
	return 0;
}

int getline(char array[]){	
	int c=0, ctr, length=0, i;
	for(i=0; (c=getchar())!=EOF && c!='\n'; ++i)
			array[i]=c;

	array[i] = '\0';	// when the line ends, set the last and the rest characters as '\0', which is the terminating character 
	length=i;		//so that the program doesnt save false/unnecessary characters at the end of the character array	
	return length;
}

void copy(char array[], char longest[]){	
		for(int i=0; array[i]!='\0'; ++i)
		longest[i] = array[i];
}