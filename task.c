#include <stdio.h>

int main()
{
    int i,j,n=5;

    //printf("Enter N: ");
   // scanf("%d", &n);

    for(i=n;i>=2;i--)
    {
        for(j=1;j<=i; j++)
        {
            printf("%d", i);
        }

        printf("\n");
    }

    return 0;

} 
