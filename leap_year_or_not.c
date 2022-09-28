#include <stdio.h>
int main()
{
	int leap_year;
	printf("Enter a year : ");
	scanf("%i",&leap_year);
	if(leap_year%4 == 0)
	{
		printf("%i is a leap year.",leap_year);
	}
	else
	{
		printf("%i is not a leap year.",leap_year);
	}
	
	
	
	
	
	
	
	
	return 0;
}