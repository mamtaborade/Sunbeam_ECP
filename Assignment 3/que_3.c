#include <stdio.h>
#include<math.h>
//a.Calculate sum of digits of integer
int main()
{
    int number, digit, sum = 0;


    printf("Enter an integer: ");
    scanf("%d", &number);


    while (number != 0)
	{
        digit = number % 10;
        sum += digit;  
        number /= 10;
    }

    
    printf("Sum of digits: %d\n", sum);
//b.Reverse the number
    int number1, reversedNumber = 0, remainder;
	printf("Enter a number: ");
    scanf("%d", &number1);

	while (number1 != 0)
	{
          remainder = number1 % 10; 
          reversedNumber = reversedNumber * 10 + remainder; 
          number1 /= 10; 
    }
	 printf("Reversed number: %d\n", reversedNumber);

//c.Check whether given number is numeric palindrome or not


   /* int number2, originalNumber1, reversedNumber1 = 0, remainder1;

    printf("Enter a number: ");
    scanf("%d", &number2);

    originalNumber1 = number2;

    // Reversing the number
    while (number2 != 0) 
	{
        remainder1 = number2 % 10; // Extract the last digit
        reversedNumber1 = reversedNumber1 * 10 + remainder1; // Append the digit to the reversed number
        number2 /= 10; // Remove the last digit
    }

    // Checking for palindrome
    if (originalNumber1 == reversedNumber1) 
	{
        printf("%d is a palindrome number.\n", originalNumber1);
    } 
	else 
	{
        printf("%d is not a palindrome number.\n", originalNumber1);
    }*/
	int n, reversed1 = 0, remainder1, original;
    printf("Enter an integer: ");
    scanf("%d", &n);
    original = n;

    // reversed integer is stored in reversed variable
    while (n != 0) {
        remainder1 = n % 10;
        reversed1 = reversed1 * 10 + remainder1;
        n /= 10;
    }

    // palindrome if orignal and reversed are equal
    if (original == reversed1)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

//


	int n2=0,number3, originalNumber2, remainder2, result = 0;

    printf("Enter an integer: ");
    scanf("%d", &number3);

    originalNumber2 = number3;

    // Counting number of digits
    while (originalNumber2 != 0) {
        originalNumber2 /= 10;
        ++n2;
    }

    originalNumber2 = number3;

    // Calculating result
    while (originalNumber2 != 0) {
        remainder2 = originalNumber2 % 10;
        result += pow(remainder2, n2);
        originalNumber2 /= 10;
    }

    // Checking if number is Armstrong
    if (result == number3)
        printf("%d is an Armstrong number.\n", number3);
    else
        printf("%d is not an Armstrong number.\n", number3);

   



	return 0;
}

