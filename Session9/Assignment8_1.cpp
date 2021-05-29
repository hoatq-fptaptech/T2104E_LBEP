#include <stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("NHap pt thu %d:",i);
		scanf("%d",&arr[i]);
	}
	int x;
	printf("Nhap x=");
	scanf("%d",&x);
	int max=x;
	for(int i=0;i<n;i++){
		if(arr[i]<x){
			max = arr[i];
			break;
		}
	}
	if(max == x){
		printf("Khong co so nao nho hon %d",x);
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]>max && arr[i]<x){
				max = arr[i];
			}
		}
		printf("Tiem can duoi cua %d la %d: ",x,max);
	}
	
	
}
