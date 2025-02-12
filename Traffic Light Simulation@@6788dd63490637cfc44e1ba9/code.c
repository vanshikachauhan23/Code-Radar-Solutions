#include<stdio.h>
int main()
{
    char num;
    scanf("%c",&num);
    if(num == 'R')
    {
        printf("Stop");
    }
    else if(num == 'G')
    {
        printf("Go");

    }
     else if(num == 'Y')
    {
        printf("Slow Down");
        
    } 
    else
    {
        printf("Invalid input");
    }
}