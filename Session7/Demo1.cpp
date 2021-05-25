#include <stdio.h>
int main(){
//	int x1,x2,x3,x4;
//	// nhap gia tri cho 4 so 
//	printf("x1=");
//	scanf("%d",&x1);
//	printf("x2=");
//	scanf("%d",&x2);
//	printf("x3=");
//	scanf("%d",&x3);
//	printf("x4=");
//	scanf("%d",&x4);
	int x1;
	int ary[10];// khai bao 1 mang (tap hop) 10 gia tri so nguyen -- chi muc(index) 0 -> 9
	x1 = 17;
	ary[0] = 17;
	ary[1] = 5;
//	ary[10] = 8;// sai vi phan tu cuoicung la ary[9]
	printf("x1 = %d\n",x1);
	printf("pt thu 0: %d",ary[0]);
//	printf("pt thu 10: %d",ary[10]);
	printf("Nhap mang: ");
	for(int i=0;i<10;i++){ // chay duyet mang ary
		printf("Nhap pt thu %d: ",i);
		scanf("%d",&ary[i]);
	}
	printf("Cac so vua nhap:\n");
	for(int i=0;i<10;i++){
		printf("%d\n",ary[i]);
	}
}
