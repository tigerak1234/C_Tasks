#include<stdio.h>
int main()
{
	float years,days;
	int choice;
	printf("Enter 1 for converting years into days \n");
	printf("Enter 2 for converting days into years \n");
	printf("Enter choice : ");
	scanf("%d",&choice);
	if(choice == 1)
	{
		printf("Enter years : ");
		scanf("%f",&years);
		printf("%.f year/years into days are %.f",years,years*365);
	}
	else if(choice == 2)
	{
		printf("Enter days : ");
		scanf("%f",&days);
		printf("%.f days into years are %.f",days,days/365);
	}
	else
	{
		printf("Invalid choice");
	}
	
	
	
	
	
	return 0;
}