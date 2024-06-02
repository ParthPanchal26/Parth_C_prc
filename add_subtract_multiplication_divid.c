/*Write capacious program which has addition subtract multiplication and division operators*/
#include<stdio.h>

void main()
{
	int a, b;
	printf("\n enter two numbers : ");
	scanf("%d %d", &a, &b);
	printf("\n result of sum = %d", a+b);
	
	{
		int c, d;
		printf("\n enter two numbers : ");
		scanf("%d %d", &c, &d);
	    printf("\n result of sum = %d", c-d);
	    
	    {
	    	int e, f;
			printf("\n enter two numbers : ");
			scanf("%d %d", &e, &f);
	    	printf("\n result of sum = %d", e*f);
			
			{
				int g, h;
				printf("\n enter two numbers : ");
				scanf("%d %d", &g, &h);
	    		printf("\n result of sum = %d", g/h);	
			}
					
		}
	
	}
}
