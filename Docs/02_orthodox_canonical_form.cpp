#include <iostream>

//  Custom copy constructor and a pointer as a member
class MyClass {
private:
  int *_myInt;

public:
  // Default constructor
  //   MyClass() : _myInt(new int(0)) {}
  MyClass() { _myInt = new int(0); }
  // Constructor
  MyClass(int value)
      : _myInt(new int(value)) {} // Additional constructor for convenience

  ~MyClass() { delete _myInt; }
  // Copy constructor
  MyClass(const MyClass &other) : _myInt(new int(*(other._myInt))) {}
  // Copy assignment operator
  MyClass &operator=(const MyClass &other) {
    if (this != &other) {
      delete _myInt;
      _myInt = new int(*(other._myInt));
    }
    return *this;
  }
  void setValue(int value) { *_myInt = value; }
  int getValue() const { return *_myInt; }
};

int main() {
  MyClass obj1(5);     // Create an object with value 5
  MyClass obj2 = obj1; // Use the copy constructor
  MyClass obj3(obj1);  // Use the copy constructor

  MyClass obj4; // the default constructor is called
  obj4 = obj1;  // Use the copy assignment operator

  std::cout << "Object 1: ";
  std::cout << obj1.getValue() << std::endl;

  std::cout << "Object 2 (copied from Object 1): ";
  std::cout << obj2.getValue() << std::endl;
  obj2.setValue(10);
  std::cout << "Object 2 (modified): ";
  std::cout << obj2.getValue() << std::endl;
  std::cout << "Object 1: ";
  std::cout << obj1.getValue() << std::endl;

  std::cout << "Object 3 (assigned from Object 1): ";
  std::cout << obj3.getValue() << std::endl;

  return 0;
}
