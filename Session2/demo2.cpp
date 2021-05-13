#include <stdio.h>

int main(){
	// input num
	int num;
	printf("Nhap num = ");
	scanf("%d",&num);
	// r = num mod 2
	int r;
	r = num % 2;
	
	// dieu kien re nhanh
	if(r==0){
		// cac lenh se lam khi YES
		printf("Number is even");
	}else{
		// cac lenh se lam khi NO
		printf("Number id Odd");
	}
	
}
