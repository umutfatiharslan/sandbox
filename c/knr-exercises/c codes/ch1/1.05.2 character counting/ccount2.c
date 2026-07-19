#include <stdio.h>

int main(){
	double ctr;

	for(ctr=0; getchar()!=EOF; ctr++) ; /* this single-semicolon is used to state that we dont need a body for 										this for loop but instead, it ll only use the ctr statement which is 										created whilst the declaration process */

		if(ctr == 0) printf("number of characters: %d", ctr);
		else printf("number of characters: %.0f", ctr-1);
			/* using double as the variable type, we have access to a wider 										range of numbers to hold the value of ctr. we used %.0f because 										we dont exactly need the numbers after the decimal point when 										counting something*/

	


	return 0;
}