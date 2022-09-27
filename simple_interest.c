#include <stdio.h>
int main()
{
	float P,R,T;
	printf("Enter principal value = ");
	scanf("%f",&P);
	printf("Enter rate of interest = ");
	scanf("%f",&R);
	printf("Enter time span = ");
	scanf("%f",&T);
	printf("Simple interest of the given details is %.2f",(P*R*T)/100);
	
	
	
	
	
	
	
	return 0;
}