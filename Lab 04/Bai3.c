#include <stdio.h>
#include <conio.h>

void main(){
	int num1, num2;
	printf("Nhap so num1 = ");
	scanf("%d", &num1);
	
	printf("Nhap so num2 = ");
	scanf("%d", &num2);

	printf("\nTong:%d", num1 + num2);
	printf("\nHieu:%d", num1 - num2);
	printf("\nTich:%d", num1 * num2);
	printf("\nThuong:%d", num1 / num2);
	
	getch();
}
