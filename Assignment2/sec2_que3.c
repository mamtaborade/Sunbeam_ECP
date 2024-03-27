//Write a program to accept Employee Id , Department No, Designation from user and display
#include<stdio.h>

int main()
{
	int emp_id,dept_no;
	char des_no;
	printf("Enter the Employee ID  : ");
	scanf("%d",&emp_id);
	printf("Enter Department No   : " );
	scanf("%d",&dept_no);
	printf("Enter Designation Code    : ");
	getchar();
	des_no = getchar();

	switch(dept_no)
	{
		case 10 :printf("Employee With Employee ID : %d Is Working In a Marketing Department ",emp_id);
			     break;

		case 20 :printf("Employee With Employee ID : %d Is Working In a Management Department ",emp_id);
			     break;

		case 30 :printf("Employee With Employee ID : %d Is Working In a Sales Department ",emp_id);
			     break;

		case 40 :printf("Employee With Employee ID : %d Is Working In a Desighning Department ",emp_id);
			     break;
	}
	switch(des_no)
	{
		case 'M' :printf("as Manager \n");
				  break;

		case 'S' :printf("as Supervisor \n");
				  break;

		case 's' :printf("as Security Officer \n");
				  break;

		case 'C' :printf("as Clerk \n");
				  break;
	}
	return 0;
}


















