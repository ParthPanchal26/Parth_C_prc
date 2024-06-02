#include<stdio.h>
int a[4]={1, 2, 3, 4};
int i;

void rev()
{
	for(i=5;i>=0;i--)
	{	
		printf("%d", a[i]);
	}	
}
void main()
{
	rev();
}
