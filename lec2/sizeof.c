#include <stdio.h>

int main(void){
	
	int a[] = {1, 2, 3, 4, 5};
	printf("%i\n",sizeof(a));
	printf("%i\n",sizeof(a)/sizeof(a[0]));

	return 0;
}