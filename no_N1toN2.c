/*Write a program to print numbers from N1 to N2, Where N1 & N2 are inputs form user.*/
#include<stdio.h>

void main()
{
	int N1, N2, i;
	printf("Enter two numbers : ");
	scanf("%d %d", &N1, &N2);
	for(i=N1;i<=N2;i++)
	{
		printf("%d ", i);
	}
}
