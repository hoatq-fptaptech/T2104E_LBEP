#include <stdio.h>
int main(){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	
	int y=0;
	while(n!=0){
		// nhung viec can lam trong vong lap khi dk dung (YES)
		y = y*10 + n%10;
		n/=10; // n= n/10;
	}
	// khi DK NO
	printf("So dao nguoc: %d",y);
}
