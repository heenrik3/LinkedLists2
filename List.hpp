//
//  List.hpp
//  LinkedLists2
//
//  Created by Henrique on 07/01/2021.
//

#ifndef List_hpp
#define List_hpp

#include <stdbool.h>
#include "Node.hpp"

template <class T>
class List {
private:

  // variables
  Node<T>* head;
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

    //  ctor
    List()
    {
      this->head = nullptr;
      size = 0;
    }

    //  dtor
    ~List()
    {

        while(!this->isEmpty())
        {
          this->pop();
        }

    }

    bool isEmpty()
    {
      if (this->head == nullptr) {
        return true;
      }
      return false;
    }

    void printList()
    {
      if (!this->isEmpty()) {         // if list is not empty

        Node<T>* tmp = this->head;    // new temporary pointer to the first node on list

        while (tmp != nullptr) {

          std::cout << tmp->getData() << " -> ";

          tmp = tmp->getNext();
        }

        std::cout << "end" << std::endl;
      }
      else
      {
          std::cout << "Not possible print an empty list!" << std::endl;
      }
    }

    void add(T data)
    {
      if (!this->isEmpty()) {  // If list is not empty:
        Node<T>* tmp;
        tmp = this->getLastNode();        // finds the last node on list
        tmp->setNext(new Node<T>(data));   // new node is allocated with data inside, last node now points to it

        this->size++;                     // list size increases
      }
      else
      {
        this->head = new Node<T>(data);   // if list is empty: head pointer points to a new node with data inside
        size++;
      }
    }

    void pop()
    {

      if (!this->isEmpty()) {
        if (size > 1) {
          Node<T>* tmp, *lastNode;            // 2 generic pointers: first used to iterate over the list, second holds last position node

          tmp = this->head;
          lastNode = this->getLastNode();

          while (tmp->getNext() != lastNode)    // search through the list until it finds the final node
          {
            tmp = tmp->getNext();
          }

          delete lastNode;                     // delete the last node
          tmp->setNext(nullptr);               // the new last node points to void

          this->size--;                     // list size decreases
        }
        else if (size == 1)
        {
            delete this->head;
            this->head = nullptr;

            this->size--;                     // list size decreases
        }
      }
      else
      {
        std::cout << "Not possible to pop an empty list!" << std::endl;
      }

    }
};


#endif /* List_hpp */
