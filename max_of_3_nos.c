#include <stdio.h>
int main()
{
	
	int a,b,c,max;
	printf("Enter number 1 : ");
	scanf("%i", &a);
	printf("\nEnter number 2 : ");
	scanf("%i", &b);
	printf("\nEnter number 3 : ");
	scanf("%i", &c);
	
	if(a>b && a>c)
	{
		printf("\n%i is the biggest number",a);
	}
	else if(b>a && b>c)
	{
		printf("\n%i is the biggest number",b);
	}
	else
	{
		printf("\n%i is the biggest number",c);
	}
	
	
	
	
	
	
	
	
	
	return 0;
}