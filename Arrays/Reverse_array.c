#include <stdio.h>

int reverseArray(int arr[], int size){
    int temp, start = 0;
    int end = size - 1;

    while(start < end){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start = start + 1;
        end = end - 1;
    }
}

int main(){
    int arr[] = {1, 23, 22, 18, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, n);
    printf("Reversed array: ");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
 return 0;

}