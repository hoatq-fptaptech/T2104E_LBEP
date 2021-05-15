#include <stdio.h>

int main(){
	const int a = 10;
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	if(n>=2 && n<=7){
		printf("Day la thu %d trong tuan",n);
	}else{
		if(n==8){
			printf("Day la chu nhat");
		}else{
			printf("Khong phai ngay trong tuan");
		}
	}
}
