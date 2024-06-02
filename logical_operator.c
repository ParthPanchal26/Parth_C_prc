/*Program to demonstrate use of logical operators*/
#include<stdio.h>

void main()
{
	int a, b, c;
	a=9, b=8, c=7;
	printf("\n %d", a>b||a<c);
	printf("\n %d", a<b&&b>c);
	printf("\n %d", !(a<b));
	printf("\n %d", !(c>b));
}
