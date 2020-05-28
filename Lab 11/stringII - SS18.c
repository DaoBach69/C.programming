#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	char names[5][20];
	void uppername(char name_arr[]);
	for(i=0; i<5; i++)
	{
		printf("Enter string %d: ", i+l);
		scanf("%s", names[i]);
	}
	for(i=0; i<5; i++)
	{
		uppername(name[i]);
		printf("\n New string %d: %s", i+l, names[i]);
	}
	return 0;
}

void uppername(char name_arr[])
{
	int x;
	for(x=0; name_arr[x] != 0; x++)
	{
		if(name_arr[x]>97 && name_arr[x]<=122)
		name_arr[x] = name_arr[x]-32;
	}
}
