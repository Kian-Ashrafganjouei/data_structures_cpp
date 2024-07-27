#include <iostream>
#include <vector>

template <typename T>
class Stack {
private:
    std::vector<T> elements;

public:
    void push(const T& value) {
        elements.push_back(value);
    }

    void pop() {
        if (!empty()) {
            elements.pop_back();
        }
    }

    T top() const {
        if (!empty()) {
            return elements.back();
        }
        return -1;
    }

    bool empty() const {
        return elements.empty();
    }
};


int main() {
    // Creating a stack of integers
    Stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);

    // Popping elements from the stack
    while (!myStack.empty()) {
        std::cout << myStack.top() << " "; // Print the top element
        myStack.pop(); // Remove the top element
    }
    std::cout << std::endl;
    return 0;
}
