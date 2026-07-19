#include <stdio.h>

int main(){
	int ctr;
	while(getchar() != EOF){
		++ctr;
		printf("result: %d\n", ctr-1);
	}
	

	return 0;
}