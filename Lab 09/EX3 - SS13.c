#include <stdio.h>
#include <string.h>

void main(){
	
	char a, str[81], *ptr;
	printf("\n Enter a sentence: ");
	gets(str);
	printf("\n Enter character to search for: ");
	a = getchar();
	ptr = strchr(str, a);
	/* return pointer to char */
	printf("\n String stars at address: %u", str);
	printf("\n First occurrence of the character is at address: %u", ptr);
	printf("\n Position of first occurrence (starting from 0)is: %d", ptr-str);
	
}
