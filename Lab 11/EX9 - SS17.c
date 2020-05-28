#include <stdio.h>

void main()
{
	char lines[5][20];
	int ctr, longctr = 0;
	int longest(char lines_arr[][20]);
	/* Funcion declaration */
	
	for(ctr = 0; ctr < 5; ctr++)
	/* Accepts string values into the array */
	{
		printf("\n Enter string %d: ", ctr+1);
		scanf("%s", lines[ctr]);
	}
	
	longctr = longest(lines);
	/* Passes the array to the funcion */
	printf("\n The longest string is %s", lines[longctr]);
	
	getch();
}

int longest(char lines_arr[][20])  /* Funcion definition */
{
	int i = 0, l_ctr = 0, prev_len, new_len;
	prev_len = strlen(lines_arr[i]);
	/* Determines the leghth of the first element */
	
	for(i++; i < 5; i++)
{
	new_len = strlen(lines_arr[i]);
	/* Determines the leghth of the first element */
	
	if(new_len > prev_len)
	l_ctr = i;
		/* Stores the subscript of the longer string */
	prev_len = new_len;
	
}
return l_ctr;
/* Return the subscript of the longest string */
}
