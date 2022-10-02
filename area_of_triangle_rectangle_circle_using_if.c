#include<stdio.h>
int main()
{
	float r,b,h,w,l,choice;
	printf("Enter 1 for area of triangle\n");
	printf("Enter 2 for area of rectangle\n");
	printf("Enter 3 for area of circle\n");
	printf("Enter your choice : ");
	scanf("%f",&choice);
	if(choice == 1)
	{
		printf("Enter base : ");
		scanf("%f",&b);
		printf("Enter height : ");
		scanf("%f",&h);
		printf("Area of triangle = %.1f",0.5*b*h);
	}
	else if(choice == 2)
	{
		printf("Enter width : ");
		scanf("%f",&w);
		printf("Enter length : ");
		scanf("%f",&l);
		printf("Area of rectangle = %.1f",w*l);
	}
	else if(choice == 3)
	{
		printf("Enter radius = ");
		scanf("%f",&r);
		printf("Area of circle = %.1f",3.14*r*r);
	}
	else
	{
		printf("Invalid choice");
	}
	
	
	
	
	return 0;
}