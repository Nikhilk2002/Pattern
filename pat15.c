#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k=0;
    for(i=1;i<=5;i++)
    {    
        for(j=1;j<=9;j++)
        {
            if(j<=k+i)
            {
                printf("*");
            }
        }
        k++;
        printf("\n");
    }
    return EXIT_SUCCESS;
}