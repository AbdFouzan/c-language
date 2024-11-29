#include <stdio.h>

int main(){
    int arr[] = {119, 27, 377, 36, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = arr[0];
    for(int i=0; i<size; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("The Minimum element from the array is: %d", min);
    return 0;

}