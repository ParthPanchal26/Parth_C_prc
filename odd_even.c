/*Write your own program which reads an integer from keyboard and prints whether given number is odd or even and in which it includes.*/
#include<stdio.h>

int main()
{
	int num;	
	printf("\n NUMBER IS CAN BE EVEN OR ODD;\n");
	
	printf("\n Enter a number : \t");
	scanf("%d", &num);
	
	printf("\n IT INCLUDE IN FOLLOWING NUMBERS :\n");
	
	if(num % 2 == 1)
		printf("\n number is odd : 1,3,5,...,n\n");
	else
		printf("\n number is even : 0,2,4,...,n\n");
	
	{
		int num;
		
		printf("\n NUMBER IS CAN BE ODD OR EVEN\n");
		
		printf("\n Enter a number : \t");
		scanf("%d", &num);
		
		printf("\n IT INCLUDE IN FOLLOWING NUMBERS : \n");
		
		if(num % 2 == 1)
			printf("\n number is odd : 1,3,5,...,n\n");
		else	
			printf("\n number is even : 0,2,4,...,n\n");
	}
}
