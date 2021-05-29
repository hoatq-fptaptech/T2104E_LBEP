#include <stdio.h>
// viet ham tren noi can su dung;
// can viet ham tinh tong 2 so nguyen
#include "thuvien.h"
int main(){ // cung la 1 function nhung la 1 function dac biet
	// muon tinh tong 2 so nguyen
	int a = 10,b = 20;
	printf("Tong 2 so tren la : %d\n",tinhtong(a,b));
	printf("Tong cua 5 va 7 la: %d\n",tinhtong(5,7));
	int t;
	t = tinhtong(100,200); // t = 300;
	// su dung ham return void;
	kiemtrasole(199);
	/*
		if(199%2==1){
			printf("199 la so le\n");
		}
	*/
	int k = -1;
	bool kt = ktsoduong(k); // k chi co the nhan gia tri: true / false
	if(kt== true){
		printf("%d la so duong\n",k);
	}else{
		printf("%d ko phai so duong\n",k);
	}
	if(kiemtrasonguyento(197) == true){
		printf("197 la so nguyen to\n");
	}
}
