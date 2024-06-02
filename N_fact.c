/*W.a.p. to find N factorial value*/
/*1*2*3*...*N*/
#include<stdio.h>

void main()
{
	int N, fact=1, i=1;
	printf("Enter number for find out Factorial :::::::::::::::::::::::::::::::::::::::::::\n");
	printf("_______________________________________________________________________________\n");
	printf("Enter an integer you like : ");
	scanf("%d", &N);
	while(i<=N)
	{
		fact *= i;
		i++;
	}
	printf("\nFactorial is : %d", fact);
}
