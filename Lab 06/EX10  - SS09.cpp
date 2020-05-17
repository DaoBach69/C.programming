#include <stdio.h>

main(){
	
	int x;
	char i, ans;
	i = "";
	do
	{
		x = 0;
		ans = 'y';
		printf("\n Enter sequence of character: ");
		do {
			i = getchar ();
			x++;
		}while (i != '\n');
		i = "";
		printf("\n Number of characters entered is: %d", --x);
		printf("\n More sequence (Y/N || ans == 'y')");
	}
}
