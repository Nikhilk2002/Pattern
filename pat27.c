#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k=0,x;
    for(i=1;i<=9;i++)
    {   x=1;
        i<6?k++:k--;
        for(j=1;j<=5;j++)
        {
            if(j>=6-k){
            printf("%d",x);
             x++;
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}