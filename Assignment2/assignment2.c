#include<stdio.h>
int main()
{
	int num1;
	printf("Enter number to check Even or Odd:\n ");
	scanf("%d",&num1);
	if(num1 % 2==0)
		printf("Number is even\n");
	else
		printf("Number is odd\n\n");
	return 0;

}
