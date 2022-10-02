#include <stdio.h>
int main()
{
	char operator1;
	int num1,num2;
	printf("Enter an operator : ");
	scanf("%c",&operator1);
	printf("Enter number 1 : ");
	scanf("%i",&num1);
	printf("Enter number 2 : ");
	scanf("%i",&num2);
	switch(operator1)
	{
		case '+': printf("Addition of %i and %i = %i",num1,num2,num1+num2);
		break;
		case '-': printf("Subtraction of %i and %i = %i",num1,num2,num1-num2);
		break;
		case '*': printf("Multiplication of %i and %i = %i",num1,num2,num1*num2);
		break;
		case '/': printf("Division of %i and %i = %i",num1,num2,num1/num2);
		break;
		
		default:
		printf("Invalid choice!");
		
		
		
		
		
		
	}	
	return 0;
}