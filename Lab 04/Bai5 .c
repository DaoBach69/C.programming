#include <stdio.h>

void main(){
	int height, top, bottom, dientich; 
	printf("Nhap chieu cao = ");
	scanf("%d", &height);
	
	printf("Nhap canh tren = ");
	scanf("%d", &top);
	
	printf("Nhap canh duoi = ");
	scanf("%d", &bottom);
	
	dientich = 0.5*height*(top+bottom);
	printf("Dien tich hinh thang la: %d", dientich);
	
	return 0;
}
