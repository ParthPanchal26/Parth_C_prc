/*Write a program to calculate the sum of elements of array*/
#include<stdio.h>

void main()
{
	int sum, i, n[6];
	i=0;
	while(i<6){
		printf("Enter array element n[%d] : ", i);
		scanf("%d", &n[i]);
		i++;
	}
	sum=0;
	i=0;
	while(i<6){
		sum=sum+n[i];
		i++;
	}
	printf("\nSum of all elements : %d", sum);
}
