#include <iostream>
#include "List.hpp"

int main(int argc, char const *argv[]) {

  List<double>* n = new List<double>();

  n->add(5);
  n->add(2);
  n->add(0);
  n->add(7);

  n->printList();

  

  return 0;
}
