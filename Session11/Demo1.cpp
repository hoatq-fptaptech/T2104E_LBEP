#include <stdio.h>
#include <stdlib.h>
int main(){
	int n = 100;
	int *a,*b;  // b[i] += a[i]+10; 
	a = (int *)malloc(n*sizeof(int)); // a[100];
	for(int i=0;i<n;i++){
		a[i] = i+1000;// ko sao  1000 -> 1099
	}
	b = (int *)calloc(n,sizeof(int)); //int b[100];
	for(int i=0;i<n;i++){
		b[i] += (a[i]+10); // se co the bi sai 
	}
	printf("Mang B:\n");
	for(int i=0;i<n;i++){
		printf("%5d",b[i]);
	}
	
}
