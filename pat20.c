#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j;
    char word[]="MALAYALAM";
    for(i=0;i<=8;i++)
    {
        for(j=0;j<=9;j++)
        {
            if(j<=i)
            {
                printf("%c ",word[j]);
            }
        }
        printf("\n");
    }
return EXIT_SUCCESS;
}