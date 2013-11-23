#include <stdio.h>

struct { int d; char e;} s;

void fa(int j[5]){
	int i;
	i = sizeof j;
	printf("%d\n",i);
}

void fb(int j[][10]){
	int i;
	i = sizeof j;
	printf("%d\n",i);
}

int main(void){
	
	int i;

	i = sizeof(char);
	printf("%d\n",i);

	i = sizeof(int);
	printf("%d\n",i);

	int a; i = sizeof a;
	printf("%d\n",i);

	char b[5]; i = sizeof(b);
	printf("%d\n",i);

	char *c = b; i = sizeof(c);
	printf("%d\n",i);

	i = sizeof s;
	printf("%d\n",i);

	int j[5];
	int k[10][10];
	fa(j);
	fb(k);

	return 0;

}