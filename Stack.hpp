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
  Node<T>* top;

public:
    Stack()
    {
      this->top = nullptr;
    }
    
    ~Stack();

};


#endif /* Stack_hpp */
