/*write a program which reads the radius of circle and computes its area using symbolic constant.*/
#include<stdio.h>
#define PIE 3.14

void main()
{
	float radius, area;
	printf("Enter the radius : ");
	scanf("%f", &radius);
	area=PIE*radius*radius;
	printf("\n Area of circle : %f", area);	
}
