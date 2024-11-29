#include <stdio.h>
#include <stdlib.h>

int get(int arr[], int index){
    int val = arr[index];
    return val;
}

void set(int arr[], int indx, int element){
    arr[indx] = element;
}

void pushback(int arr[], int n, int target){
    arr[n] = target;
}

int popback(int **arr, int *size){
    *size = *size - 1;
}

int main(){
    // int arr[] = { 1, 23, 11, 19, 10};
    int size = 5;
    int *arr = (int *)malloc(size * sizeof(int));
    arr[0] = 1;
    arr[1] = 23;
    arr[2] = 11;
    arr[3] = 19;
    arr[4] = 10;
    int index;
    printf("Enter the index number: ");
    scanf("%d", &index);
    int res = get(arr, index);
    printf("The given number at index %d is %d", index, res);
    printf("\n");

    int element, indx;
    printf("Enter the target number: ");
    scanf("%d", &element);
    printf("Enter the index number: ");
    scanf("%d", &indx);
    set(arr, indx, element);  
    printf("The element at index %d is now replaced by %d\n", indx, arr[indx]);

    int n = sizeof(arr) / sizeof(arr[0]);
    int target;
    printf("Enter the target: ");
    scanf("%d", &target);
    pushback(arr, n, target);
    for(int i=0; i<n; i++){
        printf("%d \n", arr[i]);
    }

    printf("Original array: ");
    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    popback(&arr, &size);
    printf("Updated array after popback: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}