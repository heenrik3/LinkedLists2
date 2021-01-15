#include <iostream>
#include "List.hpp"
#include "Stack.hpp"
#include "Queue.hpp"
//#include "WaitManager.hpp"

int main(int argc, char const *argv[])
{

  Stack<double>* stack  = new Stack<double>();

  stack->push(5);
  stack->push(100);
  stack->push(400);
  stack->print();

  delete stack;
  return 0;
}
