#include <stdio.h>

int countTrailingZeroes(unsigned int num) {
    int count = 0;

    // Count trailing zeros by shifting the number to the right
    while ((num & 1) == 0 && num != 0) {
        count++;
        num >>= 1;  // Shift the number to the right by 1
    }

    return count;
}

int main() {
    unsigned int num;

    // Input a number from the user
   
    scanf("%u", &num);

    // Call the function to count trailing zeroes
    int trailingZeroes = countTrailingZeroes(num);

    printf("%d\n", num, trailingZeroes);

    return 0;
}
