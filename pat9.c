#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("%d",j);
            }
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}