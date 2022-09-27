#include <stdio.h>
int main()
{
	
	int a;
	printf("Enter an integer : ");
	scanf("%i",&a);
	
	if(a%5 == 0 && a%11 == 0)
	{
		printf("%i is divisible by 5 and 11",a);
	}
	else
	{
		printf("%i is not divisible by 5 and 11",a);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}