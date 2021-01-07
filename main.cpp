#include <iostream>
#include "List.hpp"

int main(int argc, char const *argv[]) {

  List<int>* n = new List<int>();

  n->add(5);
  n->add(2);
  n->add(0);
  n->add(7);

  delete n;
  n->printList();



  //std::cout <<  << '\n';


  return 0;
}
