#include <stdio.h>

void main(){
	
	printf("A string in various forms :\n");
	printf("Without any fomat command :\n");
	printf("Good day Mr. Lee. \n");
	printf("With format command but without any modifer:\n");
	printf("[%s]\n","Good day Mr. Lee.");
	printf("With digit string 4 as modifer :\n");
	printf("[%4s]\n","Good day Mr. Lee.");
	printf("With digit string 19 as modifer: \n");
	printf("[%19s]\n","Good day Mr. Lee.");
	printf("With digit string 23 as modifer: \n");
	printf("[%23s]\n","Good day Mr. Lee.");
	printf("With digit string 25.4 as modifer: \n");
	printf("[%25.4s]\n","Good day Mr.Lee.");
	printf("With and digit string 25.4 as modifers :\n");
	printf("[%-25.4s]\n","Good day Mr.shroff.");
}

