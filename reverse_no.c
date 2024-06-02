/*W.A.P. to print digits in reverse order.*/
#include<stdio.h>
#include<conio.h>

void main()
{
	clrscr();
	int a, i;
	printf("Enter 9 Numbers : ");
	for(i=0;i<=9;i++)
	{
		scanf("%d", &a);
	}
	for(i=1;i<=9;i++)
	{
		printf("%d", i);
	}
	getch();
}
