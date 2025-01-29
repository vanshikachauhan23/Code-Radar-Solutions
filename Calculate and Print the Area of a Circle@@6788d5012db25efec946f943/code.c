#include <stdio.h>

int main(){
    float pi = 3.14;
    float area;
    int r;
    scanf("%d", &r);
    area = pi * r * r;
    printf("Area: %.2f", area);

    return 0;

}