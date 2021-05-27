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
	
	int low = 0,high =n-1;
	int search =15;
	int check = 0;// =1 la tim thay
	// 1 3 5 7 9 10 13 15  -> tim so 15 theo thuat toan
	while(low <= high){
		int mid = (low+high)/2;
		if(search == arr[mid]){
			check =1;
			printf("Da tim thay tai vi tri %d",mid);
			break;
		}else if(search < arr[mid]){
			high = mid-1;
		}else{
			low = mid +1;
		}
	}
	if(check ==0){
		printf("404 NOT FOUND");
	}
}
