#include<stdio.h>
int main()
{
	int num1,num2,max;
	printf("Enter first number:\n");
	scanf("%d",&num1);
	printf("Ener second number:\n");
	scanf("%d",&num2);
/*	if(num1>num2)
		printf("First number is greater\n");
	else
		printf("Second number is greater\n");*/
	max=((num1>num2)?num1:num2);
		printf("Greater number is:%d\n",max);
	return 0;
}
