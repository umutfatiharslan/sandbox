//exercise 1-19
#include <stdio.h>
#define MAXLENGTH 1000

int getline(char array[]);
void reverse(char array[], int length);

int main(){

	char arr[MAXLENGTH];
	int len=0;	

	len = getline(arr);
	printf("the original text: %s#\n", arr);
	reverse(arr, len);
	printf("the reversed text: %s#\n", arr);
	

	return 0;
}

int getline(char array[]){
	int c=0, i;
	for(i=0; (c=getchar())!=EOF && c!='\n'; ++i)
		array[i] = c;
	array[i] = '\0';
	return i;
}

void reverse(char array [], int length){
	char temp;
	if(length%2 == 0){
		for (int i=length; i>=length/2; --i){
			temp = array[i];
			array[i] = array[length-1-i];
			array[length-1-i] = temp;
		}
	}

	else 
		for (int i=length; i>(length/2)-1; --i){
			temp = array[i];
			array[i] = array[length-1-i];
			array[length-1-i] = temp;
		}
}