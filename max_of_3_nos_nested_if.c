#include <stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter number 1 : ");
	scanf("%i",&num1);
	printf("Enter number 2 : ");
	scanf("%i",&num2);
	printf("Enter number 3 : ");
	scanf("%i",&num3);
	if (num1>num2)
	{
		if(num1>num3)
		{
			printf("%i is the biggest number.",num1);
		}
		else
		{
			printf("%i is the biggest number.",num3);
		}
	}
	else if (num2>num3)
	{
		printf("%i is the biggest number.",num2);
	}
	else
	{
		printf("%i is the biggest number.",num3);
	}
	
	
	
	
	
	
	return 0;
}