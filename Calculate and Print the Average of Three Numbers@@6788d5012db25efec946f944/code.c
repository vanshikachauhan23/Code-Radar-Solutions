#include <stdio.h>
int main(){
    int a, b, c , sum;
    float result;
    scanf("%d %d %d", &a,&b,&c);
    sum = a +b+c;
    result = (float)sum /3;
    printf("Average: %.2f", result);
    return 0;

}