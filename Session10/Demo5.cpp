#include <stdio.h>
#include <iostream> // 1 thu vien cua c++ 
int main(){
	int x  = 10;
	int *p;
	x++;// 11;
	p = &x;
	std::cout << x;
	printf("\n");
	std::cout<< &x;
	printf("\n");
	std::cout<< p;
	x++;//12
	printf("\nx = %d\n",*p);
	(*p)++;
	printf("\nx = %d\n",x);// x = 13
}
