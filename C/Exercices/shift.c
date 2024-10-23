#include <stdio.h>


int main(){
    int num = 32;
    for (int i = 31; i >= 0; i--) {
        int shift = (num >> i);
        printf("Shift -> %d \n", shift);
        int bit = shift & 1;  // Shift the number and mask the last bit
        printf("bit -> %d\n", bit);
    }

    return 0;
}

