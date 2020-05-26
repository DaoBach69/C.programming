#include <stdio.h>

main(){
	
	int a, n;
	scanf("%d", &n);
	for (a=1; a<=n; a++)
	printf("\n Square of %d is %d", a, squarer (a));
	
}

squarer (int a)
/* int a */
{
	int b;
	b = a + 5;
	return (b);

}
