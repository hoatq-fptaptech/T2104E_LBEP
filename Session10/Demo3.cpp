#include <stdio.h>
#include <string.h>
int main(){
	char s1[50],s2[50];
	printf("Nhap s1: ");
	scanf("%s",s1); // hello
	printf("Nhap s2: ");
	scanf("%s",s2); // world
	
	printf("So sanh s1 voi s2: %d\n",strcmp(s1,s2));
	//s1= s2;// error
	strcpy(s1,s2);
	printf("So sanh s1 voi s2: %d\n",strcmp(s1,s2));
	int len = strlen(s1);
	printf("Do dai chuoi s1: %d\n",len);
	/*
		int len =  0;
		for(int i=0;i<50;i++){
			if(s[i] ==null) break;
		    len++;
		}
	*/
	
}
