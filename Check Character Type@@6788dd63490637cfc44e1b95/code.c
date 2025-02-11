#include<stdio.h>
int main()
{
    char var;
    scanf("%c",&var);
    if(var in 'aeiou' || var in 'AEIOU')
    {
        printf("Vowel");

    }
    else if(var >=0 || var <=9)
    {
        printf("digit");
    }
    else if(var in '#@$%&')
    {
        printf("Special Character");
    }
    else{
        printf("Consonant");
    }
    return 0;

}