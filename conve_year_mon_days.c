/*Write a progra to convert days into year and month*/
#include<stdio.h>

void main()
{
	int month, days;
	float year;
	printf("Enter days : ");
	scanf("%d", &days);
	year=days/365;
	month=days/12;
	printf("\nDays into year :  %f", year);
	printf("\nDays into month : %d", month);
}
