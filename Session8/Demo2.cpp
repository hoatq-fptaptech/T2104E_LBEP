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
	// 3 1 4 5 2
	for(int i=1;i<n;i++){// kiem tra tu so thu 2  // i = 3
		int j= i-1; // j=2
		int tmp = arr[i]; // 18
		for( ; j>=0 && tmp < arr[j] ; j--){ // dung khi het sach so phia truoc
			arr[j+1] = arr[j];
		}
		// khi den day tuc la da xet het cac so phia truoc
		arr[j+1] = tmp;
	}
	
	printf("Mang sau khi sap xep:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
