// #include <stdio.h>

// int sum_of_elements(int arr[], int size) {
//     int sum = 0;
//     for (int i = 0; i < size; i++) {
//         sum = sum + arr[i];
//     }
//     return sum;
// }

// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);

//     int arr[] = {1, 2, 3, 18, 7};
   

//     int result = sum_of_elements(arr, n);
//     printf("The sum of the elements is: %d\n", result);

//     return 0;
// }

// ---------------------------------------------------------------------------------------------------------


#include <stdio.h>

void product_of_element(int arr[], int size) {
    int result[size];
    int left = 1;
    for (int i = 0; i < size; i++) {
        result[i] = left;
        left = left * arr[i];
    }

    int right = 1;  
    for (int i = size - 1; i >= 0; i--) {
        result[i] = result[i] + right;
        right = right * arr[i];
    }

    for (int i = 0; i < size; i++) {
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
 


