#include <stdio.h>

int main() {
    int arr[] = {12, 45, 23, 56, 34}; 
    int size = sizeof(arr) / sizeof(arr[0]); 

    int largest = arr[0]; 
    for(int i = 1; i < size; i++) {
        if(arr[i] > largest) {
            largest = arr[i]; 
        }
    }
    printf("The largest element in the array is: %d\n", largest);

    return 0;
}
    
