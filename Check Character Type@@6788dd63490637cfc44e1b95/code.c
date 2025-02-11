#include<stdio.h>
#include<string.h>
int main()
{
    char var;
    scanf("%c",&var);
    if(strchr("aeiouAEIOU", var))
    {
        printf("Vowel");

    }
    else if(var >= '0' || var <= '9');
    {
        printf("Digit");

    }
    else if(strchr("@#$%&^", var))
    {
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }
    return 0;
}
