//
//  WaitManager.hpp
//  LinkedLists2
//
//  Created by Henrique on 13/01/2021.
//
//

#ifndef WaitManager_hpp
#define WaitManager_hpp

#include <cstdbool>

#include "List.hpp"
#include "Stack.hpp"
#include "Queue.hpp"

template <class T>
class WaitManager {

private:
  T* data;
  T* next;

  T* getLast()
  {
    T* tmp;

    tmp = this->data;

    while (tmp->next != nullptr) {
      tmp = tmp->next;
    }
    return tmp;
  }

  bool isEmpty()
  {
    (this->data == nullptr) ? return true : return false;
  }

public:
    WaitManager()
    {
      this->data = this->next = nullptr;
    }

    virtual ~WaitManager()
    {

    }

    void addType(T data)
    {
      if (!this->isEmpty()) {
        T* tmp;
        tmp = this->getLast();

        tmp->next(new T(data));
      }
      else {
        this->data = new T();
      }
    }

};


#endif /* WaitManager_hpp */
