/*Write a program to print square root of given number*/
#include<stdio.h>
#include<math.h>

void main()
{
	int p;
	printf("Enter a number to findout square root ::::::::::::::\n");
	printf("_____________________________________________________\n");
	printf("\nEnter any number you like : ");
	scanf("%d", &p);
	p=(float)p;
	printf("\nSquare root is : %f", sqrt(p));
}
