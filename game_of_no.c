#include<stdio.h>

void main()
{
	int a=3, b=7, c=0;
	int n, g;
	R:
	printf("\nFor hint press 0 or you can press any other no. and skip this : ");
	scanf("%d", &g);
	if(g==c)
	{
		printf("\nbetween 1 to 5 and between 5 to 9 ..................");
	}
	printf("\n\nGuess any no. between 1 to 10 ::::::::::::: \n");
	scanf("%d", &n);
	if(n==a || n==b)
	{
		printf("\nYou are right............................");
	}
	else
	{
		printf("\nYou are wrong............................");
	}
	goto R;
}
