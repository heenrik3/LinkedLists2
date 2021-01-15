//
//  Stack.hpp
//  LinkedLists2
//
//  Created by Henrique on 07/01/2021.
//
//

#ifndef Stack_hpp
#define Stack_hpp

#include "Node.hpp"

template <class T>
class Stack {

private:

  // variables
  Node<T>* top;
  int size;

  // methods
  Node<T>* getLastNode()
  {
    Node<T>* tmp = this->head;

    while (tmp->getNext() != nullptr) {

        tmp = tmp->getNext();

    }

    return tmp;
  }

public:
  Stack()
  {
    this->top = nullptr;
    this->size = 0;
  }

  ~Stack()
  {
    while (!this->isEmpty()) {
      this->pop();
    }
  }

  bool isEmpty()
  {
    if (this->top == nullptr) {
      return true;
    }
    return false;
  }

  int getSize()
  {
    return this->size;
  }

  void push(T data)
  {
    Node<T>* node;
    node = new Node<T>(data);

    node->setNext(this->top);
    this->top = node;

    this->size++;
  }

  void pop()
  {
    if (!this->isEmpty()) {
      if (this->size > 1) {
        Node<T>* node;

        node = this->top->getNext();
        delete this->top;
        this->top = node;

        this->size--;
      }
      else if (this->size == 1)
      {
        delete this->top;
        this->top = nullptr;

        this->size--;
      }
    }
    else
    {
      std::cout << "Can't pop an empty stack!" << '\n';
    }
  }

  void print()
  {
    if (!this->isEmpty()) {         // if stack is not empty

      Node<T>* tmp = this->top;    // new temporary pointer to the first node on list

      while (tmp != nullptr) {

        std::cout << tmp->getData() << std::endl;

        tmp = tmp->getNext();
      }

      std::cout << "end" << std::endl;
    }
    else
    {
        std::cout << "Not possible to print an empty stack!" << std::endl;
    }
  }
};

#endif /* Stack_hpp */
