#include <stdio.h>
int main(){
	int s,n;
	printf("Nhap so tien ban dau:");
	scanf("%d",&s);
	printf("Nhap so nam muon gui:");
	scanf("%d",&n);
	int year = 0;
	while(year <n){
		s += s*8/100;
		year++;
	}	
	printf("So tien thu duoc sau %d nam la: %d",n,s);
}
