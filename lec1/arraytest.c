#include <stdio.h>

int changearray(int a[]){
	a[0] = 1;
	a[1] = 1;
	a[2] = 2;
}

int main(void){
	int i;

	int a[] = {0, 0, 0};
	for(i=0;i<3;i++) printf("%i",a[i]);
	printf("\n");
	changearray(a);
	for(i=0;i<3;i++) printf("%i",a[i]);
	printf("\n");
}