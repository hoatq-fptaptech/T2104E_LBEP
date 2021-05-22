#include <stdio.h>
int main(){
	int a,b;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	
//	int bcnn = a*b;
//	for(int i=a*b;i>=a && i>=b;i--){
//		if(i%a==0 && i%b==0){
//			bcnn = i;
//		}
//	}

// cach 2
	int max = a;
	if(max < b){
		max = b;
	}
	int bcnn =max;
	for(int i=max; ;i++){ // khong viet dieu kien gi hoac true thi luon luon chay ma ko kiem tra gi ca
		if(i%a==0 && i%b==0){
			bcnn = i;
			break;
		}
	}

	printf("BCNN: %d",bcnn);
}
