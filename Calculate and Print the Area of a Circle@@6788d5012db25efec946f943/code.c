#include <stdio.h>

int main(){
    float pi = 3.14;
    float area;
    char r;
    scanf("%c",&r);
    area = pi * r * r;
    printf("Area: %.2f", area);

    return 0;

}