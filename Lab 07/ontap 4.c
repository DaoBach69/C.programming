#include <stdio.h>
void main(){
	
	int Menu, gia, Y;
	do
	{
		printf("Nhap so theo menu de dat do uong: \n");
		printf("Ca phe sua gia 30k(1) \nCa phe den 25k(2) \nSinh to dua hau 20k(3) \n");
		scanf("%d", &Menu);
		
		switch(Menu)
		{
			case 1: 
				printf("Da dat ca phe sua da \n");
				gia += 30000;
				break;
			case 2:
				printf("Da dat ca phe den \n");
				gia += 25000;
				break;
			case 3:
				printf("Da dat sinh to dua hau \n");
				gia += 20000;
				break;
		}
		printf("\ Ban co muon tiep tuc dat do uong khong? (Nhap 0 de huy hoac 1 de tiep tuc dat do): \n");
		scanf("%d", &Y);
		
		
		
	}
	while(Y != 0);
	printf("\n So tien can thanh toan la: %d VND", gia);
	printf("\n Chuc quy khach ngon mieng. Tran trong! ");
	return 0;
	
}
