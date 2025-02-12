#include <stdio.h>

int main() {
    int num, i;
    scanf("%d", &num);

    if (num <= 1) {  // Handle 0 and 1 separately
        printf("Not Prime");
        return 0;
    }

    for (i = 2; i < num; i++) {  // Loop till num-1 (not including num)
        if (num % i == 0) {
            printf("Not Prime");
            return 0;  
        }
    }
    
    printf("Prime");  // If no factors found, it's prime
    return 0;
}
