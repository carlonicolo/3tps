#include <stdio.h>

void print_binary(int num) {
    // Assuming 32-bit integer
    for (int i = 31; i >= 0; i--) {
        int bit = (num >> i) & 1;  // Shift the number and mask the last bit
        printf("%d", bit);
    }
    printf("\n");
}

int main() {
    int number = 10;  // Decimal number
    printf("Decimal: %d\n", number);
    printf("Binary: ");
    print_binary(number);  // Print binary representation

    return 0;
}
