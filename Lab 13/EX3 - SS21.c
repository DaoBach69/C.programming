#include <stdio.h>
main()
{
	FILE *fp;
	char str [80];
	
	/* Writting to file JAK */
	
	if ((fp = fopen("jak", "w+")) == NULL)
	{
		printf ("Cannot open file \n\n");
		exit(1);
	}
	
	do
	{
		printf("Enter a string (CR to quit): \n");
		gets (str);
		if(*str != '\n')
		{ strcat (str, "\n");  /* add a new line */
		fputs (str, fp);
		}
	}	while (*str != '\n');
	
	/* Reading from file JAK */
	
	printf("\n\n Displaying contens of file JAK \n\n");
	rewind (fp);
	
	while (!feof(fp))
	{
		fgets (str, 81, fp);
		printf ("\n%s", str);
	}
	fclose(fp);
	
}
