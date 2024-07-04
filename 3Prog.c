#include <stdio.h>
#include <stdlib.h>

 

void print(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int N, int arr[]) {
    int i, j, value;
   int count = 0;
    
    for (i = 1; i < N; i++) {
        value = arr[i];
        j = i - 1;
        
        while (j >= 0 && value < arr[j]) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        arr[j + 1] = value;
        count++;
    }

    //  print(arr, N); // Print the sorted array
    printf("%d\n", count); // Print the count of iterations
}

int main(void) {
   int arr[] = {2, 1, 3, 1, 2};
    int N = sizeof(arr)/sizeof(arr[0]);


    insertionSort(N, arr);

    return 0;
}
