#include <stdio.h>
int main(){
	int n =0 ;
	ABC: printf("Xin chao\n"); // gan 1 label vao dong so 4
	n++;//1 4
	printf("Chao buoi sang\n");
	n++;//2 5
	printf("Chuc ngon mieng\n");
	n++;//3 6
	printf("Chuc ngu ngon\n");
	
	if(n==3){
		goto ABC; // ko dung nua vi lam roi cau truc chuong trinh
	}
}
