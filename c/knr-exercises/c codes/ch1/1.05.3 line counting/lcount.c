#include <stdio.h>

int main(){
	int c;
	double ctr;

	for(ctr=0; (c=getchar())!=EOF; ){
		if(c=='\n') ctr++;
	}
	
	printf("result: %.0f words", ctr);	

	return 0;
}