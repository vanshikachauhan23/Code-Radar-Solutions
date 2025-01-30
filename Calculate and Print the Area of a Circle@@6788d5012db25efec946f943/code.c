#include <stdio.h>

int main(){
    float pi = 3.14;
    float area;
    char r[10];
    scanf("%s",&r);
    area = pi * (int)r * (int)r;
    printf("Area: %.2f", area);

    return 0;

}