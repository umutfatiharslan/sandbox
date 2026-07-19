#include <stdio.h>
#define MAXCHAR 1000

char arr[MAXCHAR], longest[MAXCHAR];
int max, len;

int mygetline();
void copy();

int main(){

	while((len=mygetline())>0)
		if(len>max){
			max = len;
			copy();
			printf("longest line so far: %s\n", longest);
		}
		
	return 0;
}

int mygetline(){
	int c, i=0;
	for(i=0; (c=getchar())!=EOF && c!='\n'; ++i)
		arr[i] = c;
	arr[i]='\0';
	return i;
}

void copy(){
	for(int j=0; arr[j]!='\0'; ++j)
		longest[j]=arr[j];
}
