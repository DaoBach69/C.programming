#include <stdio.h>

void main(){
	
	int ary[10];
	int i, total, high;
	for (i=0; i<10; i++)
	{
		printf("\n Nhap so: %d : ", i+1);
		scanf("%d", &ary[i]);
	}
	/* Hien thi gia tri lon nhat nhap vao */
	high = ary[0];
	for (i=1; i<10; i++)
	{
		if(ary[i] > high)
		high = ary[i];
	}
	printf("\n Highest value entered was %d", high);
	
	for(i=0, total = 0; i<10; i++)
		total = total + ary[i];
	printf("\n The average of the elements of ary is %d", total/i);
}
