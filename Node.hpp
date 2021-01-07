//
//  Node.hpp
//  LinkedLists2
//
//  Created by Henrique on 07/01/2021.
//
//

#ifndef Node_hpp
#define Node_hpp


template <class T>
class Node
{
private:
    T* data;
    Node<T>* next;

public:
    Node(T data)
    {
        this->data = new T();
        *this->data = data;
        this->next = nullptr;
    }

    ~Node()
    {
        delete this->data;
    }

    void setData(T data)
    {
        *this->data = data;
    }

    void setNext(Node<T>* next)
    {
        this->next = next;
    }

    T getData()
    {
        return *this->data;
    }

    Node<T>* getNext()
    {
        return this->next;
    }



};


#endif /* Node_hpp */
