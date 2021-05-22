#include <stdio.h>
int main(){
	
	for(int i=0;i<10;i++){// chay 10 lan
		printf("AAAAA");
		for(int j=0;j<5;j++){ // chay 5 lan
			printf("BBBBB");// 5 lan voi moi gia tri cua i
		}
		
	}
	
}
// AAAAA in 10 lan
// BBBBB in 50 lan

//de hieu logic 2 vong lap long` nhau -> nen chay thu chuong trinh tren giay
/*
	i=0
			AAAA
			j:0 -> BBBBB -> j++ // 1
			j:1 --> bBBB -> j++ // 2
			j:2 -> BBBBB -> j+++ // 3
			j:3 --> BBBBB -> j++ // 4
			j:4 ---> BBBBB -> j++ // 5
			j:5 -> ko chay nua
			i++ // 1
	i=1
			AAAAA
			j:0 -> BBBBB -> j++ // 1
			j:1 --> bBBB -> j++ // 2
			j:2 -> BBBBB -> j+++ // 3
			j:3 --> BBBBB -> j++ // 4
			j:4 ---> BBBBB -> j++ // 5
			j:5 -> ko chay nua
			i++ //2		
*/

