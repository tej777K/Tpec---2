#include<stdio.h>
#include<stdlib.h>

void print(int arr[] , int n){
    for(int i =0 ; i< n ; i++){
        printf("%d",arr[i]);
        printf(" ");
    }
}

void insertionSort(int arr[] , int  n){
    for(int i = 0 ; i < n ; i++){
        int temp = arr[i] ; 
        int j = i -1 ;

        while(j>=0 && arr[j] > temp){
           arr[j+1] = arr[j];
           j--;
        // print(arr,n);
        // printf("\n");

        }
        arr[j+1] = temp;
        print(arr,n);
        printf("\n");
    }

    // print(arr,n);
}

int main(){

    int arr[] = {1, 4, 3, 5, 6, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr,n);
}
