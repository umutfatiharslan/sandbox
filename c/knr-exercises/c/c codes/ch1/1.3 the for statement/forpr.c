#include <stdio.h>

int main(){
	int fahr=0;

	int upper = 300, lower = 0, step = 20;
	printf("fahrenheit\t\tcelcius\n");
	 
	for(fahr=upper; fahr>=lower; fahr=fahr-step){		//preferring for statement instead of while is reasonable because for looks more put-together by its syntax compared to while statements
		printf("%d\t\t%15.2f\n", fahr, (5.0/9.0) * (fahr-32));
		
	}
	return 0;
}