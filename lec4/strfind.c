#include <stdio.h>

char *strfind(const char *s, const char *f){
	
	char a = *s;
	char b = *f;

	int i,j,start;
	i = 0;
	j = 0;
	start = 0;

	while(b!='\0'){

		printf("i=%d\n",i);
		printf("j=%d\n",j);
		printf("start=%d\n",start);
		printf("a=%c\n",a);
		printf("b=%c\n",b);

		if(a=='\0') {
		 		break;
		}

		if(a==b){
			i++; j++;
		} else {
			i++;
			start = i;
		}

		a = s[j];
		b = f[i];
	}

	if(a=='\0'){ 
		return &f[start];
	} else {
		return NULL;
	}
}

int main(void){

	char s[] = "de";
	char f[] = "abcde";

	char *p = strfind(s, f);
	printf("%s\n", p);

	return 0;
}