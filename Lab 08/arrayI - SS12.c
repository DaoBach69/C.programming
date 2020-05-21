#include <stdio.h>

void main(){
	
	int n;
	int num[1000];
	int l;
	int desnum[100], k;
	int i, j, temp;
	printf("\n Enter the total number of marks to be entered: ");
	scanf("%d", &n);
	for(l=0; l<n; l++)
	{
		printf("Enter the marks of students %d: ", l+1);
		scanf("%d", &num[l]);
	}
	for(k=0; k<n; k++)
		desnum[k] = num[k];
		
	for(i=0; i<n-1; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(desnum[i] < desnum[j])
			{
				temp = desnum[i];
				desnum[i] = desnum[j];
				desnum[j] = temp;
			}
		}
	}
	for(i=0; i<n; i++)
		printf("\n Number at [%d] is %d", i, desnum[i]);
	return 0;
}
