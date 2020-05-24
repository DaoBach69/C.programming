#include <stdio.h>

void main(){
	
	int var = 500, *ptr_var;
	/* var is declared as an integer and ptr_var as a pointer pointing to an integer */
	ptr_var = &var; /* stores address of var in ptr_var */
	
	printf("The value %d is stored ar address %u: ", var, &var);
	
	printf("\n The value %u is stored at address: %u", ptr_var, &ptr_var);
	
	printf("\n The value %d is stored at address: %u", *ptr_var, ptr_var);
}
