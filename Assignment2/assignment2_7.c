#include<stdio.h>
int main()
{
	int year;
	printf("Enter year:");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("Leap year\n");
	}
	else if(year%100==0)
	{	
			printf("Leap year\n");
	
	}
	else
		printf("Not leap year\n");

return 0;
}

