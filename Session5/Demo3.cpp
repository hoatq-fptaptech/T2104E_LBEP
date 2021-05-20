#include  <stdio.h>
int main(){
//	int i=1;
//	while(i<=100){
//		printf("i = %d\n",i);
//		i++;
//	}
	// boi vi ra day i = 101
	// ra ngoai nay ko can dung den i nua
	// neu muon in ra tu 1 -> 100 lan nua ma muon dung lai bien i
	// neu muon i ra duoc lan nua
//	i = 1;
//	while(i<=100){
//		printf("i = %d\n",i);
//	}
	
	for(int i=1;i<=100;i++){
		printf("i = %d\n",i); // i la local variable
	}
//	printf("sau vong lap i = %d",i);// i= error
	for(int i=1;i<=100;i++){
		printf("i = %d\n",i); // i la local variable
	}
	for(int i=1;i<=100;i++){
		printf("i = %d\n",i); // i la local variable
	}
}
