#include <stdio.h>
#include <string.h>

// Function to calculate the sum of digits of a number represented as a string
long long sumOfDigits(const char* num) {
    long long sum = 0;
    for (int i = 0; num[i] != '\0'; i++) {
        sum += num[i] - '0';
    }
    return sum;
}

// Function to calculate the super digit
int superDigit(long long num) {
    if (num < 10) {
        return num;
    }
    long long sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return superDigit(sum);
}

int main() {
    char n[100001];
    int k;
    scanf("%s %d", n, &k);

    // Calculate the sum of the digits of n
    long long initialSum = sumOfDigits(n);
    
    // Multiply the sum by k to get the starting point for the super digit
    long long p = initialSum * k;
    
    // Calculate the super digit of p
    int result = superDigit(p);
    
    printf("%d\n", result);
    
    return 0;
}

