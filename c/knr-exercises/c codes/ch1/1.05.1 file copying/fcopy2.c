#include <stdio.h>

//copy input to output, 1st version

int main(){
	int c;
	
	while((c = getchar()) != EOF){
		putchar(c);
	}


	// the part where eof value is printed (exercise 1.6 and 1.7)
	/*while(c = getchar()){
		if(getchar() != EOF){
			printf("eof status: 0\n");
		}
		else if(getchar() == EOF)
			printf("eof status: 1\n");
		
	}*/

	return 0;
}