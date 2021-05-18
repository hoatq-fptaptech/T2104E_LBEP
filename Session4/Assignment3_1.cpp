#include <stdio.h>

int main(){
	int x;
	printf("Nhap so nguyen duong:");
	scanf("%d",&x);
	int y=0;
	if(x != 0){
		y = y*10 + x%10;
		x/=10; // x = x/10;
	}
	if(x != 0){
		y = y*10 + x%10;
		x/=10; // x = x/10;
	}
	if(x != 0){
		y = y*10 + x%10;
		x/=10; // x = x/10;
	}
	if(x != 0){
		y = y*10 + x%10;
		x/=10; // x = x/10;
	}
	printf("so dao nguoc: %d",y);
	
}
