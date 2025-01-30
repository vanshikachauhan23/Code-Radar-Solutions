#include <stdio.h>

int main(){
    const float pi = 3.14;
    float area;
    float r;
    scanf("%f",&r);
    area = pi * r * r;
    printf("Area: %.2f\n", area);

    return 0;

}