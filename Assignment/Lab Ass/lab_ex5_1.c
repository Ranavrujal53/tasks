#include<stdio.h>
//Write a C program to check if a number is even or odd using an if-else statement.
main()
{
	int num;
	
	printf("Enter number:");
	scanf("%d",&num);
	
	if(num % 2 == 0)
	{
		printf("The %d is even number",num);
	}
	else
	{
		printf("The %d is Odd number",num);
	}
	return 0;
	
}
