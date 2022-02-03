#include <iostream>


class MyClass {   // The class
  public:         // Public access specifier
    int x;        // Public attribute (int variable)
};

int main() {
  MyClass CreatedObj;  // Create an object of MyClass

  // Access attributes and set values
  CreatedObj.x = 15;

  // Print values
  std::cout << CreatedObj.x; 
 
}
