#include <stdio.h>

#define SWAP(X,Y) X=X+Y;Y=X-Y;X=X-Y;

int main(void){
	
	int i = 1;
	int j = 2;

	printf("i=%i, j=%i\n",i,j);
	SWAP(i, j);
	printf("i=%i, j=%i\n",i,j);

	return 0;
} 