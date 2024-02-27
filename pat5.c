#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=12;j++)
        {
            if(j<=i*3)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}