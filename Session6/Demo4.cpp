#include <stdio.h>
int main(){
	for(int i=0;i<10;i++){
		printf("AAAAA");
		for(int j=0;j<5;j++){
			if(j=2){
				break;// 1 lenh break duoc chay chi thoat 1 vong lap
			}
			printf("BBBBB");
		}
		if(i==5){
			break;
		}
	}
	
}
