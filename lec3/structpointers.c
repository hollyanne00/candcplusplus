#include <stdio.h>

struct mystruct {
	int i;
	int j;
	int k;
};

int main(void){

	struct mystruct ps = {1, 2, 3};
	struct mystruct *p = &ps;

	//printf("++p->i: %i\n",++p->i);
	//printf("p++->i: %i\n",p++->i);
	//printf("%i",*p->i);
	//printf("*p->i++: %i\n",*p->i++);
	//printf("*p->i++: %i\n",(*p->i)++);
	printf("*p++->i: %i\n",*p++->i);

	return 0;
}