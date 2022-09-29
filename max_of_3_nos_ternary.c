#include <stdio.h>
int main()
{
	int num1,num2,num3,max;
	printf("Enter number 1 = ");
	scanf("%i",&num1);
	printf("Enter number 2 = ");
	scanf("%i",&num2);
	printf("Enter number 3 = ");
	scanf("%i",&num3);
	max = (num1>num2) ? (num1>num3) ? num1 : num3 : (num3>num1)?num3:num1;
	printf("%i is the biggest number",max);
	
	
	
	
	
	
	
	return 0;
}