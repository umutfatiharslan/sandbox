#include <stdio.h>

int power(int a, int b);

void main(){
	
	int num1=2, num2=6;
	printf("%d^%d = %d",num1, num2, power(num1, num2));

	
}

int power(int a, int b){
	int i, res=1;
	 for(i=1; i<=b; i++)/* or maybe "for(i=1; b>0; b--)" since b acts as a local variable hence its changable but for doesnt have its local scope so when b is changed through the loop the statement "return b;" will return 0 value. however the "b" value in the main is still the same because this isnt call by reference*/
		res*=a;
	return res;
}
