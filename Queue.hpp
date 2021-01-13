//
//  Queue.hpp
//  LinkedLists2
//
//  Created by Henrique on 08/01/2021.
//
//

#ifndef Queue_hpp
#define Queue_hpp

#include <iostream>
#include <stdbool.h>

#include "Node.hpp"

template <class T>
class Queue {

private:

  // variables
  Node<T>* head, *tail;
  int size;

  // methods
  /*Node<T>* getPreviousLastNode()
  {
    Node<T>* tmp = this->head;

    while (tmp->getNext() != this->tail) {

        tmp = tmp->getNext();

    }

    return tmp;
  } */

public:
    Queue()
    {
      this->head = this->tail = nullptr;
      this->size = 0;
    }

    virtual ~Queue()
    {

    }

    bool isEmpty()
    {
      if (this->head == nullptr) {
        return true;
      }
      return false;
    }

    int getSize()
    {
      return this->size;
    }

    void queue(T data)
    {
      if (!this->isEmpty()) {

        this->tail->setNext(new Node<T>(data));
        this->tail = this->tail->getNext();
        this->size++;
      }

      else
      {
        this->head = this->tail = new Node<T>(data);
        this->size++;
      }
    }

    void dequeue()
    {
      Node<T>* tmp;

      if (getSize() > 1) {
          tmp = this->head->getNext();

          delete this->head;
          this->head = tmp;

          this->size--;

      } else if (getSize() == 1) {

          delete this->head;
          this->head = nullptr;
          this->tail = nullptr;

          this->size--;
      }
      else {
        std::cout << "Not possible dequeue an empty queue!" << '\n';
      }
    }

    void print()
    {
      if (!this->isEmpty()) {

        Node<T>* tmp;

        tmp = this->head;

        while (tmp != this->tail->getNext()) {
          std::cout << tmp->getData() << " / ";

          tmp = tmp->getNext();
        }
        std::cout << "endQueue" << '\n';
                std::cout << this->getSize() << '\n';

      }
      else {
        std::cout << "Not possible to print an empty queue!" << '\n';
        std::cout << this->getSize() << '\n';
      }
    }
};

#endif /* Queue_hpp */
