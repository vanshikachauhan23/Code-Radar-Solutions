#include<stdio.h>
int main()
{
    int a , b; 
    char var;
    scanf("%d %d %c",&a, &b, &var);
    if(var == '+')
    {
        printf("%d",a+b);
    }
    else if( var == '-')
    {
        printf("%d",a- b);
    }
    else if( var == '*')
    {
        printf("%d",a*b);
    }
    else if( var == '/')
    {
        if(b==0)
        {
            printf("error");

        }
        else
        {
            printf("%d",a/b);
        }
    }
}