#include <stdio.h>
int main(){
	int s,s1;
	printf("Nhap so tien ban dau:");
	scanf("%d",&s);
	printf("Nhap so tien muon thu ve");
	scanf("%d",&s1);
	int year = 0;
	while(s<s1){
		s += s*8/100;
		year++;
	}
	printf("Can phai gui it nhat %d nam",year);
	
}
