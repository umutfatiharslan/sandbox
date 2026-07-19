// word counting -> exercise 1-12
#include <stdio.h>

#define IN 1
#define OUT 0

int main(){
	int c, state;

	for( ;(c=getchar())!=EOF; ){
		

		if(c=='\t' || c=='\n' || c==' '){	/*if its a tab/new line/blank character set "state" to OUT and get down to the 										    new line*/
			state = OUT;
			putchar('\n');
		}
		else if(state==OUT)	/*if the state is already out (meaning the read character c also isnt a tab/nl/blank) then 								    set "state" to IN*/
			state=IN;

		if(state==IN)		//if state is IN put (write on the screen) the current c character	
			putchar(c);

	}

	return 0;
}