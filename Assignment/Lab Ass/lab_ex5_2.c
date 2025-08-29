#include<stdio.h>

/*Extend the program using a switch statement to display the month
name based on the user’s input (1 for January, 2 for February, etc.).
*/
main()
{
	int month;
	
	printf("\n Enter the number of month(1-12):");
	scanf("%d",&month);
	
	switch (month) 
	{
		case 1 : printf("\njanuary");
		break;
		
		case 2 : printf("\nFebuary");
		break;
		
		case 3 : printf("\nMarch");
		break;
		
		case 4 : printf("\nApril");
		break;
		
		case 5 : printf("\nMay");
		break;
		
		case 6 : printf("\nJune");
		break;
		
		case 7 : printf("\nJuly");
		break;
		
		case 8 : printf("\nAugust");
		break;
		
		case 9 : printf("\nSeptember");
		break;
		
		case 10 : printf("\nOctober");
		break;
		
		case 11 : printf("\nNovember");
		break;
		
		case 12 : printf("\nNovember");
		break;
		
		default: printf("Invalid month number!\n");
		
	}
	return 0;
}
