#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k=0;

    for(i=1;i<=7;i++)
    {
        i<=4?k++:k--;
        for(j=1;j<=4;j++)
        { 
            if(j<=k)
            {
             printf("*");
            }
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}