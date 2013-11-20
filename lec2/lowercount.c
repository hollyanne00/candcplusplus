#include <stdio.h>
#include <string.h>

int cntlower(char str[]){
	
	int i;
	int cnt = 0;
	for(i=0;i<strlen(str);i++){
		if(str[i] >= 'a' && str[i] <= 'z') 
			cnt++;
	}

	printf("%s: %i\n",str,cnt);

	return cnt;

}

int main(void){
	cntlower("AaaAaaAaa");
	cntlower("Abcdefghi");
	cntlower("qwertyuiop");
	cntlower("MMmm");
	cntlower("PPPPPPPPPPPP");
}