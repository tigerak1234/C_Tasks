#include <stdio.h>
int main()
{
	int salary,gross,hra,da;
	printf("Basic Salary : ");
	scanf("%i",&salary);
	if(salary<=10000)
	{
		da = salary*80/100;
		hra = salary*20/100;
		gross = salary + da + hra;
		printf("The gross salary of the employee is %i",gross);
	}
	else if(salary<=20000)
	{
		da = salary*90/100;
		hra = salary*25/100;
		gross = salary + da + hra;
		printf("The gross salary of the employee is %i",gross);
	}
	else if(salary>20000)
	{
		da = salary*95/100;
		hra = salary*30/100;
		gross = salary + da + hra;
		printf("The gross salary of the employee is %i",gross);
	}
	else
	{
		printf("Invalid");
	}
	
	
	
	
	
	
	
	return 0;
}