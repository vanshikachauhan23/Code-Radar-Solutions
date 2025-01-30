#include <stdio.h>
int main(){
    char str1[50] , str2[50]; int num;
    scanf("%s %d",&str1,&num);
    scanf("%s",&str2);
    printf("Name: %s\n",str1);
    printf("Age: %d\n", num);
    printf("Hobby: %s", str2);
    return 0;

}


