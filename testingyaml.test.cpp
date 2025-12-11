#include <iostream>
#include "testingyaml.cpp"

int main() {
  auto [x, y, z] = sort();
  if (x <= y && y <= z)
  {
    return 0;
  }
  
}