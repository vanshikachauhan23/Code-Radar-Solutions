#include<stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    if(num1 >= 18)
    {
     if(num2 == 1)
     {
        printf("Eligible");
     }  
     else
     {
        printf("Not Eligible");
     } 
    }
    else{
        printf("Eligible");
    }
}