#include<stdio.h>
int main()
{
    char num;
    scanf("%c",&num);
    if(num == 'A')
    {
        printf("Excellent");
    }
    else if(num == 'B')
    {
        printf("Good");

    }
     else if(num == 'C')
    {
        printf("Average");
        
    } else if(num == 'D')
    {
        printf("Below Average");
        
    } 
    else if(num == 'F')
    {
        printf("Fail");
        
    } 
    else
    {
        printf("Invalid grade");
    }
}