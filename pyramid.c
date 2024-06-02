#include<stdio.h>

void main()
{
	int i, j, n;
	printf("Enter number of rows you want : ");
	scanf("%d", &n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf(" ");		
		}	
		for(j=2;j<n-i;j++)
		{
			printf(" *");
		}
		printf("\n");
	} 
}
