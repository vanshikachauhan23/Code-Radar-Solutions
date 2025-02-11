#include<stdio.h>
int main(){
    int var;
    scanf("%d",&var);
    if(var >=90)
    {
        printf("A");
    }
    else if(var >=80 && var < 90)
    {
        printf("B");
    }
    else if(var >= 70 && var < 80)
    {
        printf("C");

    }
    else if(var>=60 && var < 70)
    {
        printf("D");
    }
    else
    {
        printf("F");
    }
    return 0;
}