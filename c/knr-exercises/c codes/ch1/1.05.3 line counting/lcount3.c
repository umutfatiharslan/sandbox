//exercise 1-9
#include <stdio.h>

int main(){

	int c, bl=0;

	while((c=getchar())!=EOF){
		if(c==' ') bl++;
		else bl=0;

		 
			if(bl>1){
				putchar('\b');//c='\b';
				bl--;
			}
		
				putchar(c);
	}

	

	return 0;
}