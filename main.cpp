#include <iostream>

int main() {
  
  void* void_pointer = nullptr;
  std::cout << "void_pointer: " << void_pointer << std::endl;

  int a = 8;

  void_pointer = &a;

  std::cout << "void_pointer: " << void_pointer << std::endl;

}