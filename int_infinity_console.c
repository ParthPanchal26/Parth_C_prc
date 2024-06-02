/*Write a program to display entered intered infinity times on the console window*/
#include<stdio.h>

void main()
{
	int k;
	printf("Enter an integer which is lesser than 500 : ");
	scanf("%d", &k);
	while(k>=0 && k<=500)
	{
		printf(" %d ", k);
	}
}
