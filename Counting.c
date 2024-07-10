// #include<stdio.h>
// #include<stdlib.h>

//Find How many unique numbers are there in the givven array (n)
//Now create n size array 
//traverse the given array , for each value ==> go to that index increment the counter (initially set to Zero)


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

int n;
printf("Enter number of elements\n");
scanf("%d",&n);


int arr[n]; 
int output[n];

for(int i =0 ; i< n ; i++){
    output[i] = 0;
}

printf("Enter the elements : \n");

for(int i =0 ; i< n ; i++){
    scanf("%d",&arr[i]);
    output[arr[i]]++;

}

for(int i =0 ; i< n ; i++){
    printf("%d",output[i]);
    printf(" ");
}

return 0;
}