#include <stdio.h>

struct stack {
	int items[100];
	int size;
};

int main(int argc, char argv[]){

	int i;

	printf("%i\n",argc);

	struct stack polishstack;
	struct stack *p = &polishstack;
	p->size = 0;

	for(i=1;i<argc;i++){
		char op[] = argv[i];

		printf("%s\n",op);

		if((op=="*")||(op=="+")||(op=="-")){

			int a = p->items[(p->size)--];
			int b = p->items[(p->size)--];

			int c;
			if(op=='*'){
				c = a*b;
			} else if(op=='+'){
				c = a+b;
			} else {
				c = a-b;
			}

			p->items[(p->size)++] = c;

		} else {
			p->items[(p->size)++] = op; 
			printf("%i,%i\n",p->items[0],p->size);
		}

		printf("%i\n",p->items[p->size]);
	}

	return 0;
}