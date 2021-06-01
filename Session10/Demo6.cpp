#include <stdio.h>
int main(){
	int arr[10];// khai bao 1 array
	arr[0] = 5;
	arr[1] = 10;
	arr[2] = 15;
	*(arr+3) = 20; // arr[3] = 20;
	
	for(int i=0;i<10;i++){
//		arr[i] = 10;
		*(arr+i) = 10;
	}
	
	for(int i=0;i<10;i++){
		printf("%5d \n",*(arr+i));
	}
}
