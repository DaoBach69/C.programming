#include <stdio.h>

void main(){
	
	char alpha[20];
	int i, j;
	for(i=65, j=0; i<91; i++, j++)
	{
		alpha[j] = i;
		printf("\n The character now assinged is %c", alpha[j]);
	}
	getchar();
	
}
