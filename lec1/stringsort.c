#include <stdio.h>
#include <string.h>

char c[] = "qwertyuiop";
int i, change;
char tmp;

int main(void) {
	
	change = 1;

	while(change==1) {
		change = 0;
		for(i=0;i<strlen(c)-1;i++){
			if(c[i]>c[i+1]){
				tmp = c[i], c[i] = c[i+1], c[i+1] = tmp;
				change = 1;
			}
			printf("%c",c[i]);
		}
		printf("\n");
	}

	return 0;

}