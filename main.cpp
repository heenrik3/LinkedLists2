#include <iostream>
#include "List.hpp"
#include "Stack.hpp"
#include "Queue.hpp"

int main(int argc, char const *argv[]) {

  //List<double>* n = new List<double>();
  Queue<int>* n = new Queue<int>();

  n->queue(5);
  n->queue(2);
  n->queue(0);
  n->queue(7);

  n->print();


  delete n;
  return 0;
}
