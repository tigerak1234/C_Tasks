#include<stdio.h>
int main()
{
	int a=5,b=10;
	printf("Before swapping a = %i and b = %i",a,b);
	a=b+a;
	b=a-b;
	a=a-b;
	printf("\nAfter swapping a = %i and b = %i",a,b);
	
	return 0;
}