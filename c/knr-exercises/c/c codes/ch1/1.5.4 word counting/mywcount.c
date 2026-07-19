#include <stdio.h>

int main(){	// counting a word needs to count the text seperators \t, \n and ' ' (blank)
	int c;
	double ctr;

	for(ctr=0; (c = getchar()) != EOF ; ) {
		if(c=='\t' || c=='\n' || c==' '){
			ctr++;
		}
		
	}
	if(ctr>0 && c==EOF) ctr++;
	printf("result: %.0f", ctr);

	return 0;
}