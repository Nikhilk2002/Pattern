#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {   k=5;
        for(j=5;j>=1;j--)
        {
            if(j<=i)
            {
                printf("%d ",k);
                k--;
            }
            
        }
         
        printf("\n");
    }
    return EXIT_SUCCESS;
}