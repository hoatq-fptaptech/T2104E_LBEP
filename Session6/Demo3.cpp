#include <stdio.h>
int main(){
	for(int i=0;i<10;i++){
		printf("Bat dau quet don tang %d\n",i);
		if(i==3){
			//break; // khi ma lenh break duoc chay, vong lap se dung va thoat ra ngoai
			continue;//  continue la bo qua cong viec cua vong nay sang vong tiep theo
		}
		printf("Quet don xong tang %d\n",i);
	}
	// thoat ra day --> ra quan bia lien hoan
}
