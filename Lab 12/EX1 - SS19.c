#include <stdio.h>

void main(){
	
	struct strucintcal /* Defines the structure */
	{
		char name[20];
		int numb;
		float amt;
	}; 
	void main()
	{
	struct strucintcal xyz;
	void intcal(struct strucintcal);
	
	/* Accepts data into the structure */
	printf("\n Enter customer name: ");
	gets(xyz.name);
	printf("\n Enter customer number: ");
	scanf("%d", &xyz.numb);
	printf("\n Enter the principal amount: ");
	scanf("%f", &xyz.amt);
	intcal(xyz);	/* Passes the structure to a funcion */
	
}
void intcal(struct strucintcal abc)
{
	float si, rate = 5.5, yrs = 2.5;
	
	/* Computes the interest */
	si = (abc.amt * rate * yrs) / 100;
	printf("\n The customer name is %s", abc.name);
	printf("\n The customer number is %d", abc.numb);
	printf("\n The amount is %f", abc.amt);
	printf("\n The interest is %f", si);
	return;
	
}
}
