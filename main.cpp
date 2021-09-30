#include <iostream>

void hellow_world() { std::cout << "Hello , World" << std::endl; }

void sum(int arg1, int arg2) {
  int total = arg1 + arg2;
  std::cout << total << std::endl;
}

int main() {
  hellow_world();
  sum(4, 9);
}
