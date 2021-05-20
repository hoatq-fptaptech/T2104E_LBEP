#include<stdio.h>
int main()
{
    int n,i;
    printf("Nhap n=");
    scanf("%d",&n);
    
    for (i = 2; i <= n-1; i = i +1)
    {
      if(n%i==0)
	  
        {
            printf("Khong phai so nguyen to");
        }else{
        	printf("la so nguyen to");
        }
    }
 
    return 0;
}
