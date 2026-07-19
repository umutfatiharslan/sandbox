#include <stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20	//use these define statements so that you wouldnt confuse an observers mind with random-lookalike numbers added to certain meaningful variables such as...


int main(){
	int fahr;
	printf("fahrenheit\tcelcius\n");
	for(fahr=LOWER; fahr<=UPPER; fahr+=STEP){ //... this example in this row of code
		printf("%3d\t\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));		
	
	}


	return 0;
}