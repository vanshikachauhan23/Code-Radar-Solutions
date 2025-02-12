#include<stdio.h>
int main()
{
    int num ,i ;
    scanf("%d",&num);
    for(i = 2 ; i <=num ; i++)
    {
        if(num %i ==0)
        {
            printf("Not prime");
        }
    
    else
    {
        printf("Prime");
    }
    }
    
}