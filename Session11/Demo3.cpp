#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct SinhVien{
	char name[50]; // string
	int mark; // attribute (info)
}SV;
int main(){
	SV sv1;//struct SinhVien sv1;
	SV t2104e[3];
	for(int i=0;i<3;i++){
		printf("Nhap ten sv thu %d:",i);
		scanf("%s",t2104e[i].name);
		printf("Nhap diem thi:");
		scanf("%d",&t2104e[i].mark);
	}
	// sap xep theo thu tu tu be den lon
	for(int i=0;i<3-1;i++){
		for(int j=0;j<3-i-1;j++){
			if(t2104e[j].mark > t2104e[j+1].mark){
				SV tmp;
				memcpy(&tmp,&t2104e[j],sizeof(SV));
				memcpy(&t2104e[j],&t2104e[j+1],sizeof(SV));
				memcpy(&t2104e[j+1],&tmp,sizeof(SV));
			}
		}
	}
	printf("\n Danh sach:\n");
	for(int i=0;i<3;i++){
		printf("%s: %d\n",t2104e[i].name,t2104e[i].mark); // char
	}
//	char ss[20];// 20 ky tu hoac 1 chuoi
//	printf("%s",ss);
//	printf("%c",ss[6]);
	SV *p; // khai bao 1 con tro  dang SV
	p= (SV *)malloc(3*sizeof(SV));
	p->mark = 10;// p[0].mark;
	(p+1)->mark = 8; // p[1].mark
	
}
