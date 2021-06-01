#include <stdio.h>
#include <string.h>
#include "arraystring.h"
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	char arrs[n][50];// khai bao 1 mang n string
	
	nhapmangstring(arrs,n);
	
	sapxepalphabe(arrs,n);
	printf("Sau khi sap xep:\n");
	inmangstring(arrs,n);
}
