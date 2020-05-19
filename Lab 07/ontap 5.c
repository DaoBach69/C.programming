#include <stdio.h>

void main(){
	
	int sothe, matkhau, luachon, tienrut,
	int sodu = 9999999;
	char tieptuc;
	
	printf("\n Vui long nhap so the: ");
	scanf("%d", &sothe);
	printf("\n Vui long nhap mat khau: ");
	scanf("%d", &matkhau);
	if(sothe == 67896789 && matkhau == 12341234)
	{
		printf("\n Dang nhap thanh cong ");
		do{
			printf("\n Nhap so de lua chon ");
			printf("1. Rut tien \n2. Kiem tra so du \n");
			scanf("%d", &luachon);
			
			switch(luachon)
			{
				case 1:
					printf("\n Nhap so tien muon rut: ");
					scanf("d", &tienrut);
					if(sodu >= tienrut)
					{
					sodu -= tienrut;
					printf("Ban da rut thanh cong %d \n So du con lai %d", tienrut, sodu);
					}
					else
					{
					printf("Tai khoan khong du de rut");
					}
					break;
				
				case 2:
					printf("So du cua ban hien tai la: %d", sodu);
					break;
			}
			printf("\n Ban co muon tiep tuc khong (Y/N)? \n");
			scanf("%s", &tieptuc);	
		}
		while(tieptuc != 'Y');
		{
			printf("Tam biet");
		}
	}
	
	return 0;
}
