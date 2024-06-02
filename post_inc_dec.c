/*program to demonstrate use of post increment/decrement operators*/
#include<stdio.h>

void main()
{
	int a, b;
	a=5;
	b=a++;
	printf("\n %d %d", a, b);
	a=5;
	b=a--;
	printf("\n %d %d", a, b);
}
