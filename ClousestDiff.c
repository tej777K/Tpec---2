#include <stdio.h>
#include <stdlib.h> // For qsort() function
#include <limits.h> // For INT_MAX constant


int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}


int* closestNumbers(int arr_count, int* arr, int* result_count) {
    qsort(arr, arr_count, sizeof(int), compare);

    int min_diff = INT_MAX;
    
    int count = 0;
    
    int *pairs = (int*)malloc(2 * arr_count * sizeof(int));

    for (int i = 0; i < arr_count - 1; i++) {
        int diff = abs(arr[i] - arr[i + 1]);
        if (diff < min_diff) {
            min_diff = diff;
            count = 0;
        }
        if (diff == min_diff) {
            pairs[count * 2] = arr[i];
            pairs[count * 2 + 1] = arr[i + 1];
            count++;
        }
    }

    *result_count = count * 2;
    return pairs; 
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int result_count;
    int *result = closestNumbers(n, arr, &result_count);

   
    for (int i = 0; i < result_count; i += 2) {
        printf("%d %d ", result[i], result[i + 1]);
    }

    free(result); 
    return 0;
}