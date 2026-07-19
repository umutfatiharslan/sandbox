#include <stdio.h>

int main(){
	float celc=0, fahr=0;

	int upper = 300, lower = 0, step = 20;
	printf("fahrenheit\t\tcelcius\n");			// \t puts tab char. \n new line character.
	fahr=lower; 
	while(fahr<=upper){
		celc = 5 * (fahr-32)/9;	//you simply cant just multiply fahr with 5/9 because of truncation errors in c. if you divide two integers and if (nominator<denominator) then 5/9=0 !!!
		printf("%.2f\t\t%15.2f\n", fahr, celc);		// %6.2f write the float number in 6 character-sized space and show 2 digits after the decimal point
		fahr=fahr+step;
	}
	return 0;
}