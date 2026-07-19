//exercise 1-13 horizontal bars
#include <stdio.h>
#define LENGTH_INDEX 20

int main(){

	int length[LENGTH_INDEX]={0}, c, nc, index=0, i=0;

	while((c=getchar())!=EOF){
		if(c==' ' || c=='\t' || c=='\n')
			++index;

		else
			++length[index];
	}
	
	

	for(index=0; index<LENGTH_INDEX; ++index){
		printf("\nword %d\t", index+1);
		while(i<length[index]){
			printf("x");
			++i;
		}
		i=0;
		printf("total of %d characters", length[index]);
	}

	return 0;
}