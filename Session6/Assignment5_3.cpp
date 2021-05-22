#include <stdio.h>

int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	int ucln = 1;
	// tim so nho hon trong 2 so
//	int min=a;
//	if(min > b){
//		min = b;
//	}
	for(int i=2;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			ucln = i;
		}
		// neu dat print vao day se in ra bang so lan lap cua vong lap
	}
	printf("UCLN: %d",ucln);// in ra man hinh 1 lan
}
