#include <stdio.h>
int main(){
	int x;
	printf("Nhap x=");
	scanf("%d",&x);
	int n;// khai bao sai
	// khi khai bao mang, bat buoc khai co kich co mang (array size)
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];// den luc nay moi khai bao array vi n moi co gia tri
	for(int i=0;i<n;i++){ // vong lap duyet mang
		printf("nhap phan tu thu %d:",i);
		scanf("%d",&arr[i]);
	}
	
	int kiemtra = 0;// co` kiem tra
	for(int i=0;i<n;i++){
		if(arr[i] == x){
			kiemtra = 1;// co 1 so x
			break;
		}
	}
	if(kiemtra>0){
		printf("Mang co phan tu gia tri %d",x);
	}else{
		printf("Khong tim thay");
	}
}
