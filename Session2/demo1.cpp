#include <stdio.h>

int main(){
	int a;// khai bao bien a
	int b; // khai bao bien b
	printf("Nhap vao 2 so can tinh tong:");
	scanf("%d",&a);// nhap vao gia tri cho bien a tu ban phim
	scanf("%d",&b);// nhap vao gia tri cho bien b tu ban phim
	int c;
	c = a+b; // tinh tong cua a va b roi cho gia tri vao bien c
	printf("tong 2 so: %d",c);// in ra ket qua la gia tri cua bien c
	
}
