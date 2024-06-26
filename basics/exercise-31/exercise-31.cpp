#include <iostream>

// Function declaration
void multiply_with_pointer(int* ptr, int multiplier);

int main() {
    int number = 10;
    int multiplier = 5;

    // Display initial value
    std::cout << "Original value: " << number << std::endl;

    // Call the function
    multiply_with_pointer(&number, multiplier);

    // Display the result after multiplication
    std::cout << "After multiplication: " << number << std::endl;

    return 0;
}

// Function definition
void multiply_with_pointer(int* ptr, int multiplier) {
    *ptr *= multiplier;
}
