#include <stdio.h>

int isSorted(int arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }
    return -1;
}

int main(){
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of the array : ");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    
    if(isSorted(arr, size)){
        printf("The given array is sorted.\n");
    }
    else{
        printf("The given array is not sorted.\n");
    }

    return 0;
} 