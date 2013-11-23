#include <stdio.h>

#define SWAP(T, X, Y) T=X; X=Y; Y=T;

int main(void){

	int i = 1;
	int j = 2;

	printf("i=%i, j=%i\n",i,j);
	SWAP(int, v[i++], w[f(x)]);
	printf("i=%i, j=%i\n",i,j);

	return 0;

}