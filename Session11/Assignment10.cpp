#include <stdio.h>
#include <stdlib.h>
#include "pointer.h"

int main(){
	int n,*p; // con tro la mang, mang la con tro
	printf("Nhap kich thuoc ban dau cua mang:");
	scanf("%d",&n);
	p = (int *)malloc(n*sizeof(int));// int arr[n]   p[0] -> p[n-1] = ...;
	//p = (int *)calloc(n*sizeof(int));// int arr[n]  p[0] -> p[n-1] = 0;
	nhapmang(p,0,n);
	int max = timMax(p,n);
	sapxep(p,n);
	
	printf("So lon nhat: %d \n",max);
	inmang(p,n);
	
	// nhap them m phan tu
	int m;
	printf("\nSo luong can nhap them:");
	scanf("%d",&m);
	p = (int *)realloc(p,(n+m)*sizeof(int));
	// nhap cac phan tu tiep theo
	nhapmang(p,n,n+m);
	
	int max = timMax(p,n+m);
	sapxep(p,n+m);
	
	printf("So lon nhat: %d \n",max);
	inmang(p,n+m);
	free(p);
}
