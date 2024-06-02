/*Write a program to print following series*/
//1, 3, 5, 7,...,99
#include<stdio.h>

void main()
{
	int n=1;
	do
	{
		printf("  %d", n);
		n+=2;
	}while(n<100);
}
