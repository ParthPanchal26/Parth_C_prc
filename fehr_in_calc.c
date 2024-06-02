/*write a program to convert the given temperature in fehrenhit to celcius*/
#include<stdio.h>

void main()
{
	float calc, fehr;
	printf("\n \t Enter temperature in fehrenhit :");
	scanf("%f", &fehr);
	calc=(5.0/9)*(fehr-32);
	printf("\t \n Equivelent celcius value is = %f \n", calc);
}
