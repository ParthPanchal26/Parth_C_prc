#include<stdio.h>

void main()
{
	int i, n;
	printf("Enter 5 numbers : ");
	for(i=0;i<=5;i++)
	{
		scanf("%d", &n);
	}
	for(i=0;i<=5;i++)
	{
		printf("%d", i);
	}
	for(i=5;i>=0;i--)
	{
		printf("%d", i);
	}
}
