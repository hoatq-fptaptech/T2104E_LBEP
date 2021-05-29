#include <stdio.h>
int main(){
	int arr[5] = {6,1,3,8,2};
	
	for(int i=1;i<5;i++){
		int j=i-1;
		int tmp = arr[i];
		while(j>=0&&tmp<arr[j]){ // j la vi tri dang kiem tra so sanh xem co vuot qua tiep ko
			arr[j+1] = arr[j];
			j--;
			printf("\nMang sau 1 lan kiem tra so phia truoc:\n");
			for(int k=0;k<5;k++){
				printf("%5d",arr[k]);
			}
		}
		arr[j+1] = tmp;
		printf("\nMang sau khi xong lan sap xep chen:\n");
			for(int k=0;k<5;k++){
				printf("%5d",arr[k]);
			}
		
	}
}
