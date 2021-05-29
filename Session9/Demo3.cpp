#include <stdio.h>
// viet ham tren noi can su dung;
// can viet ham tinh tong 2 so nguyen
#include "thuvien.h"

int main(){
	int k = 1001;
	if(kiemtrasonguyento(k)){
		printf("%d la so nguyen to\n",k);
	}else{
		printf("%d ko phai so nguyen to\n",k);
	}
	int snttiep = songuyentotieptheo(k);
	printf("SNT tiep: %d\n",snttiep);
	printf("So dao nguoc: %d\n",timsodaonguoc(snttiep));
	printf("FIBONACI thu 12: %d\n",timsothuocfibonaci(12));
}
