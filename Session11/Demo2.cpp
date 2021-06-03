#include <stdio.h>
#include <string.h>
struct SinhVien{
	char name[50]; // string
	int mark; // attribute (info)
};
int main(){
	struct SinhVien sv; // sv la 1 bien co kieu du lieu struct SinhVien
	sv.mark = 10;
	struct SinhVien sv2;
	sv2.mark = 9;
	printf("nhap ten sv 1: ");
	scanf("%s",sv.name);
	printf("Nhap lai diem cho sv 1:");
	scanf("%d",&sv.mark);
	
	printf("Thong tin vua nhap: diem thi- %d -- ten sv--%s",sv.mark,sv.name);
	
	struct SinhVien t2104e[25]; // 1 mang 25 sinh vien, moi sinh vien gom: name, mark
	for(int i=0;i<25;i++){
		printf("Nhap ten sv thu %d:",i);
		scanf("%s",t2104e[i].name);
		printf("Nhap diem thi:");
		scanf("%d",&t2104e[i].mark);
	}
	
}
