#include <stdio.h>
int main()
{
	float phy,chem,math,eng,comp,total_marks,percentage;
	printf("Enter physics marks : ");
	scanf("%f",&phy);
	printf("Enter chemistry marks : ");
	scanf("%f",&chem);
	printf("Enter maths marks : ");
	scanf("%f",&math);
	printf("Enter english marks : ");
	scanf("%f",&eng);
	printf("Enter computer marks : ");
	scanf("%f",&comp);
	total_marks = phy + chem + math + eng + comp;
	printf("Total marks = %.f",total_marks);
	percentage = total_marks/5;
	printf("\nPercentage = %.2f\n",percentage);
	if(percentage>75)
	{
		printf("Distinction");
	}
	else if(percentage>60 && percentage<=75)
	{
		printf("First Class");
	}
	else if(percentage>50 && percentage<=60)
	{
		printf("Second Class");
	}
	else if(percentage>35 && percentage<=50)
	{
		printf("Pass Class");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}