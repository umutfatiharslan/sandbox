//program counts words, lines and characters
#include <stdio.h>

#define IN 1		//kelime içinde olma durumu
#define OUT 0	//kelime dışında olma durumu

int main(){	

	int c, state, word, line, ch, outcount;

	while((c=getchar())!=EOF){
		ch++;
		if(c=='\n'){
			state = OUT;
			line++;	
		}
	
		else if(c=='\t')
			state = OUT;	

		else if(c==' ')
			state = OUT;

		else if(c==EOF)		
			state = OUT;

		else{
			state = IN;
			outcount=0;
		}

		if(state==OUT){
			outcount++;
			if(outcount==1 && ch>1)
				word++;
		}

		if(ch==1 && c!='\n' && c!='\t' && c!=' ')
			word=9;

	}

	

	printf("word count: %d\nline count: %d\ncharacter count: %d", word-8, line, ch);	

	return 0;
}