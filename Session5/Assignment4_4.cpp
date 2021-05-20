#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	do{
		printf("nhap a=");
		scanf("%d",&a);
		printf("Nhap b=");
		scanf("%d",&b);
		printf("Nhap c=");
		scanf("%d",&c);
	}while(!(a+b>c&&b+c>a&&a+c>b)) ; // dk de lap lai la: 3 so ko phai 3 canh tam giac
	// ra day chac chan duoc 3 canh tam giac
	int p = a+b+c;
	float p2 = (float)p/2;
	float s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
	printf("Chu vi: %d\n",p);
	printf("Dien tich: %f",s);
}
