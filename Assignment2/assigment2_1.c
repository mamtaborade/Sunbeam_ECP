#include<stdio.h>
int main()
{
	int a,b ,div;
	printf("Enter 1st number:\n");
	scanf("%d",&a);
	printf("Enter 2nd number:\n");
	scanf("%d",&b);
	if (a==0||b==0)
	{
	printf("Number not divisible by zero\n");
	}
	else
	{
	div=a/b;
	printf("Division:%d\n",div);
	}
	return 0;

}

