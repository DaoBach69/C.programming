#include <stdio.h>

void main(){
	
	int n, age;
	char name[23];
	printf("Ho va ten: ");
	fgets(name, sizeof(name), stdin);
	printf("Tuoi: ");
	scanf("%d", &age);
	printf("\n\n\a");
	for(n = 0; n <= age; n++)
		puts(name);
	
	return 0;
}
