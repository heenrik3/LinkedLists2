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

//template <class T>
class WaitManager {

private:
  Node* node;

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

    return (this->data == nullptr) ? true : false;

  }

public:
    WaitManager()
    {
      this->node = nullptr;
    }

    virtual ~WaitManager()
    {

    }

    void newList()
    {
    }


};


#endif /* WaitManager_hpp */
