#include <stdio.h>
#include <string.h>

int main()
{
	char str[2000];
	printf("Nhap chuoi: ");
	gets(str);
	printf("Chuoi da nhap la: %s", str);
	printf("\n Chuoi chu thuong la: %s", strlwr(str));
	
	return 0;

}
