// #include <stdio.h>

// int product_of_elements(int arr[], int size){
//     int product = 1;
//     for(int i=0; i<size; i++){
//         product = product * arr[i];
//     }
//     return product;
// }

// int main(){
//     int arr[5] = {1, 1, 2, 5, 1};
//     int size;
//     printf("Enter the size: ");
//     scanf("%d", &size);

//     int res = product_of_elements(arr, size);
//     printf("The product of all the elements of an array is: %d", res);
    
//     return 0;
// }

// ------------------------------------------------------------------------------------------------------------

#include <stdio.h>

void product_of_element(int arr[], int size) {
    int result[size];
    int left = 1;
    for (int i = 0; i < size; i++){
        result[i] = left;
        left = left * arr[i];
    }

    int right = 1;  
    for (int i = size - 1; i >= 0; i--){
        result[i] = result[i] + right;
        right = right * arr[i];
    }

    for (int i = 0; i < size; i++){
        printf("Product excluding element at index %d: %d\n", i, result[i]);
    }
}

int main() {
    int arr[5] = {1, 1, 2, 5, 1};
    int size;
    printf("Enter the size (<= 5): ");
    scanf("%d", &size);
    
    product_of_element(arr, size);

    return 0;
}
