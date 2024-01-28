#include "LinkedList.h"
#include <iostream>

int main() {
    // Creating a linked list of integers
    LinkedList<int> myList;

    // Appending elements to the list
    myList.append(10);
    myList.append(20);
    myList.append(30);

    // Printing the elements in the list
    std::cout << "Linked List: " << std::endl;
    myList.print();

    myList.remove(20);
    myList.append(50);
    
    std::cout << "Linked List: " << std::endl;
    myList.print();

    // Clearing the list (freeing memory)
    myList.clear();

    return 0;
}