#include <stdio.h>

int main(int argc, char *argv[]){

        int stack[100];
        int size = 0;

        int i;
        for(i=1;i<argc;i++){
                char *op = argv[i];

                printf("%s\n",op);

                if(*op=='*') {

                        int a = stack[--size];
                        int b = stack[--size];

                        int c = a * b;
                        stack[size++] = c;

                } else if(*op=='+') {

                        int a = stack[--size];
                        int b = stack[--size];

                        int c = a + b;
                        stack[size++] = c;

                        printf("%d + %d = %d\n",a,b,c);

                } else if(*op=='-') {

                        int a = stack[--size];
                        int b = stack[--size];

                        int c = a - b;
                        stack[size++] = c;

                } else {

                        stack[size++] = atoi(op);

                }

        }

        printf("%d\n",stack[0]);

        return 0;
}