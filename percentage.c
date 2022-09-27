#include <stdio.h>
int main()
{
	float phy,chem,math,comp,eng,percentage;
	printf("Enter physics marks = ");
	scanf("%f",&phy);
	printf("Enter chemistry marks = ");
	scanf("%f",&chem);
	printf("Enter math marks = ");
	scanf("%f",&math);
	printf("Enter computer marks = ");
	scanf("%f",&comp);
	printf("Enter english marks = ");
	scanf("%f",&eng);
	percentage = (phy+chem+math+comp+eng)/500*100;
	printf("Percentage of the above marks is %.2f",percentage);
	
	
	
	return 0;
}