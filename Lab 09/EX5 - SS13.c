#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int number;
	int *ptr;
	int i;
	printf("\n How many ints would you like store? ");
	scanf("%d", &number);
	ptr = (int *) malloc (number * sizeof(int)); 
	id (ptr!=NULL)
	{
		for(i = 0; i < number; i++)
		{
			*(ptr + i) = i;
		}
		for
		{
			printf("%d\n", *(ptr+(i-1))); 
			
		}
		free(ptr); 
		return 0;
	}
	else
	{
		printf("\n Memory allocation failed - not enough memory. \n");
		return 0;
	}
}
