#include <stdio.h>
int main(){
	char str[100]; // array characters -- string max 20 charaters 
	
	// theo cach da hoc
//	for(int i=0;i<100;i++){
//		scanf("%c",&str[i]);// nhap tung ky tu cho mang
//	}

	// cach moi, nhap string
	//gets(s);// unsafe;
	printf("Nhap chuoi s:");
	scanf("%s",str); // chi co string (array characters) moi co the viet 
	
	printf("Chuoi vua nhap: %s",str);
}
