#include <stdio.h>

int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	switch(n){
		case 0: printf("A");break;
		case 1: printf("B");break;
		case 2: printf("C");break;
		default: printf("D");break;// luon luon chay neu quen break o tren
	}
}
