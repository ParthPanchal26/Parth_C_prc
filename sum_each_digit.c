/*Write a prgram to print sum of each digit*/
#include<stdio.h>

void main()
{
	int rem, i, t, n, sum=0;
	printf("\nEnter any digit you like : ");
	scanf("%d", &n);
	t = n;
	for(i=0;i<=n;i++)
	{
		rem = t % 10;
		sum = sum + rem;
		n = n / 10;
	}
	printf("\nSum of each digit : %d", sum);
	printf("\n--------------------------------");
}
