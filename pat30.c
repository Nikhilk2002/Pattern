#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,m;
    for(i=1;i<=5;i++)
    {   k=1;
        m=1;
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i && k)
            {
                printf("%d",m);
                m++;
                k=0;
            }
            else
            { 
                printf(" ");
                 k=1;
            }
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}