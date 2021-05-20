#include <stdio.h>
int main(){
	float s,s1;
	printf("Nhap so tien ban dau:");
	scanf("%f",&s);
	printf("Nhap so tien muon nhan ve:");
	scanf("%f",&s1);
	int i;
	for( i=0;s<s1; i++){
		s+= s*8/100;
	}
	printf("So nam can gui tiet kiem: %d",i);
}
