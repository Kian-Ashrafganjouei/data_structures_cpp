#include "LinkedList.h"
#include <iostream>

template <typename T>
LinkedList<T>::LinkedList() : head(nullptr) {}

template <typename T>
LinkedList<T>::~LinkedList() {
    clear();
}

template <typename T>
void LinkedList<T>::append(const T& value) {
    Node<T>* newNode = new Node<T>(value);

    if (!head) {
        head = newNode;
    } else {
        Node<T>* current = head;
        while (current->next) {
            current = current->next;
        }
        current->next = newNode;
    }
}

template <typename T>
void LinkedList<T>::print() const {
    Node<T>* current = head;
    while (current) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

template <typename T>
void LinkedList<T>::remove(const T& value) {
    Node<T>* current = head;
    Node<T>* previous = nullptr;

    while (current && current->data != value) {
        previous = current;
        current = current->next;
    }

    if (current) {
        if (previous) {
            previous->next = current->next;
        } else {
            head = current->next;
        }
        delete current;
    }
}

template <typename T>
void LinkedList<T>::clear() {
    while (head) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
    }
}

template class LinkedList<int>;  // Explicit instantiation for int
