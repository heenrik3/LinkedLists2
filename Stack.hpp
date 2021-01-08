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

  ~Stack();

  bool isEmpty()
  {
    if (this->top == nullptr) {
      return true;
    }
    return false;
  }

  int getSize()
  {
    return this.size;
  }

  void push(T data)
  {
    Node<T>* node;
    node = new Node<T>(data);

    node->setNext(this->top);
    this->top = node;
  }

  void pop()
  {
    if (!this->isEmpty()) {
      Node<T>* node;

      node = this->top->getNext();
      delete this->top;
      this->top = node;
    }
    else
    {
      delete this->top;
      this->top = nullptr;
    }
  }

  void print()
  {
    if (!this->isEmpty()) {         // if list is not empty

      Node<T>* tmp = this->top;    // new temporary pointer to the first node on list

      while (tmp != nullptr) {

        std::cout << tmp->getData() << " -> ";

        tmp = tmp->getNext();
      }

      std::cout << "end" << std::endl;
    }
    else
    {
        std::cout << "Not possible print an empty stack!" << std::endl;
    }

  }



};


#endif /* Stack_hpp */
