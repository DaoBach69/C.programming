#include <stdio.h>

void main(){

	int toan, ly, hoa, trungbinh;
	printf("\nNhap diem toan:");
	scanf("%d", &toan);
	
	printf("\nNhap diem ly:");
	scanf("%d", &ly);
	
	printf("\nNhap diem hoa:");
	scanf("%d", &hoa);
	
	trungbinh = (toan + ly + hoa)/3;
	printf("Diem trung binh: %d", trungbinh);
	
	return 0;
}
