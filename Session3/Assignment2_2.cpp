#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);
	printf("Nhap b=");
	scanf("%d",&b);
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a==0){
		if(b==0){
			if(c==0){
				// a b c =0
				printf("Pt vo so nghiem");
			}else{
				printf("PT vo nghiem");
			}
		}else{
			float x = -((float)c)/b;// sai
			printf("Nghiem cua pt: %f",x);
		}
	}else{
		// day la pt bac 2
		int d = b*b - 4*a*c;
		if(d < 0){
			printf("PT vo nghiem");
		}else{
			if(d==0){
				float x = -(float)b/(2*a);
				printf("PT co ngiem kep: %f",x);
			}else{
				float x1=  (-b-sqrt(d))/(2*a); // (int - float) / (int * int) => float
				float x2 = (-b+sqrt(d))/(2*a);
				printf("Nghiem thu nhat x1 = %f\n",x1);
				printf("Nghiem thu hai x2 = %f\n",x2);
			}
		}
	}
	
}
// %d  -- int
// %f  -- float
// %lf -- double
// %c --- char

