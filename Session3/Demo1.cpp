#include <stdio.h>

int main(){
	int x,y;
	x = 10;
	y=20;
	
	printf("x = %d \n",x);
	printf("y = %d \n",y);
	
	printf("x = %d  va y = %d\n",x,y);
	
	float k = 3.14;
	printf("pi = %f\n",k);// dung ten bien vi day can dua ra gia tri
	double n = 12.112244;
	printf("n = %lf\n",n);
	
	// nhap vao gia tri cho k
	scanf("%f",&k);// vi k la kieu du lieu float
	// nhap vao gia tri cho n;
	scanf("%lf",&n);
	
	x = x +1;// 11
	x++;// 12
	++x;// 13
	y = y -1; // y-- --y;  19
	y--;// 18
	--y; // 17
	
	//x**;// ko co
	// x//  ko co
	
	x += 2; // x = x +2;
	x -= 10;// x = x - 10;
	x *=3; // x = x * 3;
	x /=4; // x = x/4;
	
	// AND &&
//	D && D => D
//	D && S => S
//	S && S => S
//	==> chi dung khi ca 2 cung dung
//	
	// OR ||
//	D || D => D
//	D || S => D
//	S || S => S
//	==> chi sai khi ca 2 cung sai
//	
	// NOT !
//	!D ==> S
//	!S ==> D
	
//	int a, b,c;
//	
//	if( a+b > c && a+c>b && b+c>a){// day la dieu kien de 3 so la 3 canh tam giac
//		
//	}
}
