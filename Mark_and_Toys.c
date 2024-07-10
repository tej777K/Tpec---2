#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers (used for qsort)
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k); // Read the number of toys and the budget

    int *prices = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]); // Read the toy prices
    }

    // Sort the prices array
    qsort(prices, n, sizeof(int), compare);

    int count = 0;
    int totalCost = 0;

    // Calculate the maximum number of toys that can be bought within the budget
    for (int i = 0; i < n; i++) {
        if (totalCost + prices[i] <= k) {
            totalCost += prices[i];
            count++;
        } else {
            break;
        }
    }

    printf("%d\n", count); // Output the result

    // Free allocated memory
    free(prices);

    return 0;
}
