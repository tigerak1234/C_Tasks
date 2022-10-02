#include<stdio.h>
int main()
{
	int x,fact=1,number;
	printf("Enter a number : ");
	scanf("%d",&number);
	for(x=1;x<=number;x++)
	{
		fact=fact*x;	
	}	
	printf("Factorial of %d is %d",number,fact);
	return 0;
}