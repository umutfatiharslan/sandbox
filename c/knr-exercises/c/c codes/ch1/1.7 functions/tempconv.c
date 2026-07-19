//exercise 1-15 temperature conversion program mentioned at section 1.2 using functions
#include <stdio.h>
#define UPPER 300
#define LOWER 0
#define STEP 20

float conversion(float fahr);

int main(){

	for(float i=LOWER; i<=UPPER; i+=STEP){

		printf("%.2f degrees fahrenheit corresponds to %.2f degrees celcius\n", i, conversion(i));
	}

	return 0;
}

float conversion(float fahr){

	float celc = ((fahr-32) * 5) / 9;
	return celc;

}