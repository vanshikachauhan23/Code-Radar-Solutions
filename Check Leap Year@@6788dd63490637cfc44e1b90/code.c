#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    if((num % 4==0) && (num % 100 != 0) || (num % 400 == 0))
    {
        printf("Leap Year");

    }
       
    else
    {
        printf("Not a Leap Year");
    }
    return 0;
}