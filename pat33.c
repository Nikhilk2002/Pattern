#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int i,j,row;
    printf("Enter row limit of the pyramid: ");
    scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row;j++)
        {
            if((i+j)<=row)
            {
                printf("  ");
            }
            else
            {
                printf("* ");
            }
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}