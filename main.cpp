#include <iostream>
#include "List.hpp"
#include "Stack.hpp"

int main(int argc, char const *argv[]) {

  //List<double>* n = new List<double>();
  Stack<int>* n = new Stack<int>();

  n->push(5);
  n->push(2);
  n->push(0);
  n->push(7);

  n->print();
  n->pop();
  n->print();



  return 0;
}
