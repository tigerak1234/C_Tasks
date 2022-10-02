#include<stdio.h>
int main()
{
	int n1=0,n2=1,n3,i,number;
	printf("Enter a number : ");
	scanf("%i",&number);
	printf("\n%i %i",n1,n2);
	for(i=2;i<number;i++)
	{
		//printf("\n%i",i);
		n3=n1+n2;
		printf(" %i",n3);
		n1=n2;
		n2=n3;
	}
	return 0;
}  

   