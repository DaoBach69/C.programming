#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, c;
	printf("Nhap diem mon a: ");
	scanf("%d", &a);
	printf("Nhap diem mon b: ");
	scanf("%d", &b);
	printf("Nhap diem mon c: ");
	scanf("%d", &c);
	
	if (a >= 4 && a < 10)
		printf("\n Dat diem mon a ", a);
	else if (a < 4 && a > 0)
		printf("Mon a truot");
	
	if (b >= 40 && b < 100)
		printf("\n Dat diem mon b ", b);
	else if (b > 0 && b < 40)
		printf("\n Mon b truot");
	
	if (c >= 7 && c < 15)
		printf("\n Dat diem mon c ");
	else if (c > 0 && c < 7)
		printf("\n Mon c truot");
	
	return 0 ;
}
