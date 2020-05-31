#include <stdio.h>

void main()
{
	int i, j, arr[5]={23, 90, 9, 25, 16};
	char flag;
	
	/* Loop to compare each elements of the unsorted part of the array */
	for(i=1; i<5; i++)
	
	/* Loop for each element in the sorted part of the array */
	for(j=0; flag='n'; j<i && flag == 'n'; j++)
		{
		if(arr[j] > arr[i])
		{
			/* Invoke the funcion to insert the number */
			insertnum(arr, i, j);
			flag = 'y';
		}
	}
	
	printf("\n\n The sorted array\n");
	for(i=0; i<5; i++)
	printf("%d\t", arr[i]);
	
	getch();
} 
insert num(int arrnum[], int x, int y )
{
	int temp;
	/* Store the number to be inserted */
	temp = arrnum[x];
	/* Loop to push the sorted part of the array down from the position where the number has to inserted */
	for(; x>y; x--)
		arrnum[x]=arrnum[x-l];
	/* Insert the number */
	arrnum[x] = temp;
	
}
