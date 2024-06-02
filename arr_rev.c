#include<stdio.h>

int main()
{
	int i, n[8]={1, 2, 3, 4, 5, 6, 7, 8};
	for(i=0;i<=8;i++)
	{
		printf("%d", i);
	}
	printf("\n");
	for(i=8;i>=0;i--)
	{
		printf("%d", i);
	}
}
