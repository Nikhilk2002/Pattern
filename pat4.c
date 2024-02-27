#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j;
    for(i=4;i>=1;i--)
    {
        for(j=1;j<=8;j++)
        {
            if(j<=i*2)
            {
                printf("* ");
            }


        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}