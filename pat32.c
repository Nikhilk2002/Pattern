#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,k,n=1;

     int m;
    for(i=1;i<=5;i++)
    {   k=1;
        
        
        for(j=1;j<=9;j++)
        {
            if(j>=6-i && j<=4+i && k)
            {
                if(i%2==0)
                {
                printf("%d",n);
                    
                k=0;
                }
                else{
                    m=i/2;
                    printf("%c",64+i);
                k=0;
                }
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