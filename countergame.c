#include <stdio.h>

// Function to check if n is a power of 2
int isPowerOf2(unsigned long int n) {
    return (n & (n - 1)) == 0;
}

// Function to find the largest power of 2 less than n
unsigned long int largestPowerOf2(unsigned long int n) {
    unsigned long int p = 1;
    while (p <= n) {
        p <<= 1;
    }
    return p >> 1;
}

int main() {
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++) {
        unsigned long int n;
        scanf("%lu", &n);

        int win = 0; // 0 means Richard's turn, 1 means Louise's turn

        while (n > 1) {
            if (isPowerOf2(n)) {
                n >>= 1; // Divide by 2 if n is a power of 2
            } else {
                n -= largestPowerOf2(n); // Subtract the largest power of 2 less than n
            }
            win = !win; // Toggle turns
        }

        if (win == 0) {
            printf("Richard\n");
        } else {
            printf("Louise\n");
        }
    }
    return 0;
}
