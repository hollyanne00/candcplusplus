#include <stdio.h>

int nums[] = {5,6, 2, 4, 9, 8, 1};
int i,j;
int change;

int main(void) {
	
	change = 1;

	while(change==1) {
		change = 0;
		for(i=0;i<6;i++){
			if(nums[i]>nums[i+1]){
				j = nums[i], nums[i] = nums[i+1], nums[i+1] = j;
				change = 1;
			}
			printf("%i",nums[i]);
		}
		printf("\n");
	}

	return 0;

}