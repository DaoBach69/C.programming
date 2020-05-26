#include <stdio.h>

void main(){
	
	int a, b, c;
	a = b = c = 0;
	
	printf("\n Enter 1st integer: ");
	scanf("%d", &a);
	printf("\n Enter 2nd integer: ");
	scanf("%d", &b);
	c = adder(a, b);
	printf("\n\n a & b in main() are: %d, %d", a, b);
	printf("\n\n c in main() is: %d", c);
	/* gives the addition of a and b */
}

adder(int a, int b)
{
	int c;
	c = a + b;
	a *= a;
	b += 5;
	printf("\n\n within adder funcion are: %d, %d", a, b);
	printf("\n c within adder funcion is: %d", c);
	return (c);
	
}
