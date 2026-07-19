//exercise 1-13 vertical bars
//edit and fix the unalignments on the vertical table
/* copy paste this as test input:
sljk sjkdahsdkj akjhsda kjshda kjdash kjshakdj sakjdshakjhdsakjhda kjsadhkjsdah jksdah kjdsah ksdajhksajd asdkj*/
#include <stdio.h>
#define LENGTH_INDEX 20
#define CHARACTER_LENGTH_ASSUMED_MAX 20

int main(){

	int length[LENGTH_INDEX]={0}, c, nc, index=0, i=0, j=0;

	while((c=getchar())!=EOF){
		if(c==' ' || c=='\t' || c=='\n')
			++index;

		else
			++length[index];
	}

	for(i=CHARACTER_LENGTH_ASSUMED_MAX; i>0; --i){
		for(j=0; j<LENGTH_INDEX; ++j){
			if(length[j]>=i && j<9)
				printf("x ");
			else if(length[j]>=i && j>=9)
				printf("x  ");
			else if(j>=9)
				printf("   ");
			else
				printf("  ");
		}
		printf("\n");
	}

	for(index=0; index<LENGTH_INDEX; ++index)
			printf("%d ", index+1);

	return 0;
}