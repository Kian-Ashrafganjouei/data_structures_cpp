#include <iostream>

// Function declaration
int find_max_element(int* arr, int size);

int main() {
    // Example array
    int arr[] = { 5, 8, 3, 9, 1 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // Find the maximum element
    int max = find_max_element(arr, size);

    // Print the result
    std::cout << "The maximum element in the array is: " << max << std::endl;

    return 0;
}

// Function definition
int find_max_element(int* arr, int size) {
    int max = *arr;  // Initialize max with the first element of the array
    for (int i = 0; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);  // Update max if current element is greater
        }
    }
    return max;
}
