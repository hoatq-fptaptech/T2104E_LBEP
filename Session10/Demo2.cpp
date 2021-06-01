#include <stdio.h>
#include <string.h>
int main(){
	char s1[50],s2[50];
	printf("Nhap s1: ");
	scanf("%s",s1); // hello
	printf("Nhap s2: ");
	scanf("%s",s2); // world
	
	strcat(s1,s2); // s1 = s1 +s2; // nhung la ghep string 
	printf("S1: %s\n",s1);// helloworld
	printf("S2: %s\n",s2);// world
	
	strcat(s2,s1); 
	printf("S1: %s\n",s1);// helloworld
	printf("S2: %s\n",s2);// worldhelloworld
	
	strcat(s1,s2);
	printf("S1: %s\n",s1);// helloworldworldhelloworld
	printf("S2: %s\n",s2);// worldhelloworld
	
}
