#include <stdio.h>
#include <conio.h>

void main(){
	
	int a, b;
	printf("\n nhap mot so: ");
	scanf("%d", &a);
	
	printf("\n nhap mot so: ");
	scanf("%d", &b);
	
	a = b % 2;
	
	if (a == 0)
	printf("\n a khong chia het cho b");
	else
	printf("\n a chia het cho b");
}
