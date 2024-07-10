#include <stdio.h>
#include <stdlib.h>

// Function to compare two integers in descending order (used for qsort)
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k); // Read the number of flowers and the number of friends

    int *prices = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]); // Read the flower prices
    }

    // Sort the prices array in descending order
    qsort(prices, n, sizeof(int), compare);

    int totalCost = 0;

    // Calculate the minimum cost to purchase all flowers
    for (int i = 0; i < n; i++) {
        totalCost += (i / k + 1) * prices[i];
    }

    printf("%d\n", totalCost); // Output the result

    // Free allocated memory
    free(prices);

    return 0;
}
