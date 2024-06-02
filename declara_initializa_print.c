/*W.a.program to demonstrate the variable declaration, initialization and printing of the values.*/
#include<stdio.h>

void main()
{
	char c;
	int i;
	unsigned int ui;
	long int li;
	float f;
	double d;
	
	c='A';
	i=123;
	ui=1234U;
	li=12345L;
	f=1234.5678;
	d=12345.6789;
	
	printf("%c \n", c);
	printf("%d \n", i);
	printf("%u \n", ui);
	printf("%ld \n", li);
	printf("%f \n", f);
	printf("%f \n", d);
}
