#include <iostream>

// Function prototype
void reverse_array(int* arr, int size);

int main() {
    const int size = 5;  // Size of the array
    int arr[size] = {1, 2, 3, 4, 5};  // Example array
    
    // Print the original array
    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    // Reverse the array using the function
    reverse_array(arr, size);
    
    // Print the reversed array
    std::cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

// Function definition to reverse an array
void reverse_array(int* arr, int size) {
    // Swap elements from the beginning and end of the array
    for (int i = 0; i < size / 2; ++i) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}
