#include <stdio.h>
int main(){
	int menu; // bien kiem tra xem menu chon chuc nang gi
	int tongtien = 0;// so tien ma khach can tra
	do{
		printf("1. Chon mon an\n");
		printf("2. Chon do uong\n");
		printf("3. Thanh toan\n");
		printf("4. Thoat chuong trinh\n");
		printf("Chon chuc nang:");
		scanf("%d",&menu);
		switch(menu){
			case 1:{
				// dua ra danh sach mon an cho KH chon
				int monan;
				do{
					printf("Khach chon mon an trong danh sach sau:\n");
					printf("1. Com hai san dac biet\n");
					printf("2. Com ga hap xa\n");
					printf("3. Pho Ly Quoc Su\n");
					printf("4. Bun bo Hue\n");
					printf("5. Quay lai chon chuc nang\n");
					printf("Vui long chon mon:");
					scanf("%d",&monan);
					if(monan == 1){
						tongtien +=10;
						printf("Khach da chon Com hai san dac biet\n");
					}else if(monan==2){
						tongtien +=20;
						printf("Khach da chon Com ga hap xa\n");
					}else if(monan==3){
						tongtien +=30;
						printf("Khach da chon Pho Ly Quoc Su\n");
					}else if(monan==4){
						tongtien +=40;
						printf("Khach da chon Bun bo Hue\n");
					}
				}while(monan!=5);
				break;
			}
			case 2:{
				int douong;
				do{
					printf("Khach chon do uong trong danh sach sau:\n");
					printf("1. Capuchino\n");
					printf("2. Cafe nau da\n");
					printf("3. Sinh to\n");
					printf("4. Sua chua\n");
					printf("5. Quay lai chon chuc nang\n");
					printf("Vui long chon mon:");
					scanf("%d",&douong);
					if(douong == 1){
						tongtien +=10;
						printf("Khach da chon Capuchino\n");
					}else if(douong==2){
						tongtien +=20;
						printf("Khach da chon Cafe nau da\n");
					}else if(douong==3){
						tongtien +=30;
						printf("Khach da chon Sinh to\n");
					}else if(douong==4){
						tongtien +=40;
						printf("Khach da chon Sua chua\n");
					}
				}while(douong!=5);
				break;
			}
			case 3:{
				printf("KH vua chon thanh toan\n");
				printf("Tong tien can thanh toan: %d\n",tongtien);
				tongtien=0;
				// in ra gia tri tong tong tien
				break;
			}
			case 4:{
				printf("KH vua chon thoat\n");
				// khong lam gi ca de thoat chuong trinh
				break;
			}
			default:{
				printf("Vui long chon dung chuc nang tren danh sach\n");
				break;
			}
		}
	}while(menu!=4);
	// ra day la xong chuong trinh
}
