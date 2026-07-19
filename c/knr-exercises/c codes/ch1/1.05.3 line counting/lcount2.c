//exercise 1-8
#include <stdio.h>

int main(){
	int bl, t, nl, c;

	for( ;(c = getchar())!=EOF; ){
		if(c == ' '){bl++;}
		else if(c == '\t'){t++;}		
		else if(c == '\n'){nl++;}
	} 
	
	printf("there are:\n%d blanks.\n%d tabs.\n%d new lines.", bl, t-8 /*because EOF(^Z) has 8 tabs in it*/, nl);


	return 0;
}