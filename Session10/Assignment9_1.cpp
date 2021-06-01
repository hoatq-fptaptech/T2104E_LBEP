#include <stdio.h>
bool timkiem(int x,int arr[],int n){ // truyen vao so x can tim, mang so nguyen va so luong phan tu cua mang (kich thuoc mang)
	for(int i=0;i<n;i++){
		if(x == arr[i]){
			return true;
		}
	}
	return false; // bool - kieu luan ly, chi co 2 gia tri: true / false
}
void inmang(int arr[],int n){
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
			printf("%5d\n",arr[i]); // van la in ra so nguyen, nhung khi in ra man hinh se danh 5 o trong tren man hinh
		}
	}
}
int main(){
	int n;
	printf("Nhap kich thuoc mang:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("Nhap pt thu %d:",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("Nhap so can tim:");
	scanf("%d",&x);
	if(timkiem(x,arr,n)){
		printf("%d co nam trong mang",x);
	}else{
		printf("%d khong nam trong mang",x);
	}
	inmang(arr,n);
}
