#include <stdio.h>

int maxXor(int L, int R) {
    int max_xor = 0;
    for (int a = L; a <= R; a++) {
        for (int b = a; b <= R; b++) {
            int xor_value = a ^ b;
            if (xor_value > max_xor) {
                max_xor = xor_value;
            }
        }
    }
    return max_xor;
}

int main() {
    int L, R;
    printf("Enter L and R: ");
    scanf("%d %d", &L, &R);
    int result = maxXor(L, R);
    printf("%d\n", result);
    return 0;
}
