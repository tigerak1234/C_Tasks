#include<stdio.h>
int main()
{
	int x,number;
	printf("Enter a number : ");
	scanf("%i",&number);
	for(x=1;x<=10;x++)
	{
		printf("%i X %i = %i\n",number,x,number*x);
	}	
	return 0;
}