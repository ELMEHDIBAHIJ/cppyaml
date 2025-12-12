#include <iostream>
#include "testingyaml.cpp"

int main() {
  auto [x, y, z] = sort();
  if (z > x) {
    return 0;
  } else {
    return 1;
  }
  
}