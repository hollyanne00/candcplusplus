#include <stdio.h>

int merge(int a[], int s, int m, int e){
	
	int b[e-s];
	int i = s;
	int j = m;
	int k = 0;

	// merge
	while(i<m){
		if((j<e)&&(a[j]<a[i])){
			b[k] = a[j]; j++;
		} else {
			b[k] = a[i]; i++;
		}
		k++;
	}

	while(j<e){
		b[k] = a[j]; j++; k++;
	}

	// copy back to a
	i=s;
	j=0;
	while(j<(e-s)){
		a[i] = b[j];
		i++; j++;
	}

	return 0;
}

int mergesort(int a[], int s, int e){
	
	if(e-s<2) return;

	mergesort(a, s, s+((e-s)/2));
	mergesort(a, s+((e-s)/2), e);
	merge(a, s, s+((e-s)/2), e);

	return 0;
}

int printarray(int a[], int n){

	int i;
	for(i=0;i<n;i++) printf("%i ",a[i]);
	printf("\n");
}

int main(void){
	
	int a[] = {7, 4, 3, 0, 8, 3};
	int n = sizeof(a)/sizeof(a[0]);
	printarray(a, n);
	mergesort(a, 0, n);
	printarray(a, n);
}