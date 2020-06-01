#include <stdio.h>

int main(){
	
    int number;
    int sotachra;
    int s = 0;
    printf("Enter number: ");
    scanf("%d",&number);
    for(;number!=0;){
        sotachra = number % 10;
        s += sotachra;
        number /= 10;
    }    
    printf("Total digits: %d", s);
}
