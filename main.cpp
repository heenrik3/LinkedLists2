#include <iostream>
#include "List.hpp"
#include "Stack.hpp"
#include "Queue.hpp"
#include "WaitManager.hpp"

int main(int argc, char const *argv[])
{

  WaitManager* wManager = new WaitManager();

  wManager.newList(new List<int>());

  delete wManager;
  return 0;
}
