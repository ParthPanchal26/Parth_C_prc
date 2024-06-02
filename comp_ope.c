/*program to demonstrate use of compound assignment operators*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b;
	
	a=5;
	a +=2;
	printf("%d \n", a);
	
	a=6;
	a -=1;
	printf ("%d \n", a);
	
	a=7;
	a *=2;
	printf("%d \n", a);
	
	a=8;
	a /=2;
	printf("%d \n", a);
}
