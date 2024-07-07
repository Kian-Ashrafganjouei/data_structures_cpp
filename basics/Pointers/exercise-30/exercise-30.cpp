#include <iostream>

void swapPointers(int* ptr1, int* ptr2) {
    //-- Write your code below this line
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp; 
    
    
    
    //-- Write your code above this line
}

int main(void)
{
    int x=5, y=9;
    swapPointers(&x, &y);
    std::cout << &x << " " << &y << std::endl;  // Sorry, Address of X and Y will always be the same
    std::cout << x << " " << y << std::endl;  // Now x is 9 and y is 5.

    return 0;
}
