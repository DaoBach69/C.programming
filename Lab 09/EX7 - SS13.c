#include <stdio.h>
#include <stdlib.h>

void main(){
	
	int *a, i, n, sum = 0;
	printf("\n%s%s", "An array wil be created dynamically. \n\n",
	"Input an array size n followed by integers: ");
	scanf("%d", &n); 
	a = (int *) calloc (n, sizeof(int) ); 
	/* GET A VALUE FOR EACH ELEMENT */
	for
	{
		printf("Enter %d values: ", n);
		scanf("%d", a + i);
	}
	/* SUM THE VALUES */
	for(i = 0; i < n; i++)
		sum += a[i];
	free(a);/* FREE THE SPACE */
	/* PRINT THE NUMBER AND THE SUM */
	printf("\n%s%7d\n%s%7d \n\n", "Number of elements: ", n, "Sum of the elrments: ", sum);
	
}

