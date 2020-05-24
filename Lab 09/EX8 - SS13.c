#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int *ptr;
	int i;
	ptr = (int *)calloc(5, sizeof(int *));
	if (ptr!=NULL)
	{
		*ptr = 1;
		*(ptr + 1) = 2;
		ptr[2] = 4;
		ptr[3] = 8;
		ptr[4] = 16;
		/* ptr[5] = 32; would't assign anything */
		ptr = (int *)realloc(ptr, 7*sizeof(int));
		if(ptr!=NULL)
		{
			printf("Now allowcating more memory... \n");
			ptr[5] = 32; /*	NOW IT IS LEGAL! */
			ptr[6] = 64;
			for(i=0; i<7; i++)
			{
				printf("ptr[%d] holds %d \n", i, ptr[i]);
			}
			realloc(ptr,0); /* SAME AS FREE (ptr); -JUST FANCIER */
			return 0;
		}
		else
		{
			printf("Not enough memory - relloc failed.\n");
			return 1;
		}
	}
	else
	{
		printf("Not enough memory - realloc failed. \n");
		return 1;
	}
}
