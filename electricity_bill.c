#include <stdio.h>
int main()
{
	float money,unit,extra_charge,total_charge;
	printf("Enter number of units consumed : ");
	scanf("%f",&unit);
	if(unit<=50)
	{
		money = unit*0.50;
		printf("Charge for consuming %.1f units = %.1f$",unit,money);
	}
	else if(unit<=150)
	{
		money = unit*0.75;
		printf("Charge for consuming %.1f units = %.1f$",unit,money);
	}
	else if(unit<=250)
	{
		money = unit*1.20;
		printf("Charge for consuming %.1f units = %.1f$",unit,money);
	}
	else if(unit>250)
	{
		printf("Your units consumed are more than 250 therefore you will be charged extra.\n");
		money = unit*1.50;
		extra_charge = money*0.20;
		total_charge = money + extra_charge;
		printf("Charge for consuming %.1f units including additional charges = %.1f$",unit,total_charge);
	}
	else
	{
		printf("Enter a valid number!");
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}