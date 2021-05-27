#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){ // vong lap duyet mang
		printf("nhap phan tu thu %d:",i);
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){ 
			if(arr[j]>arr[j+1]){
				// thuat toan swap
				int temp = arr[j];
				arr[j] = arr[j+1]; 
				arr[j+1] = temp;
			}
		}
	}
	printf("Mang sau khi sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
