#include <iostream>

class MyClass {
public:
    int value;
    int *ptrToValue;

    // Constructor
    MyClass(int val) : value(val) {
        ptrToValue = &value; // Initialize ptrToValue to point to value
    }
};

int main() {
    MyClass obj1(10), obj2(20);

    // For obj1
    std::cout << "Object 1:" << std::endl;
    std::cout << "Value: " << obj1.value << std::endl;
    std::cout << "Pointer to Value: " << obj1.ptrToValue << std::endl;
    std::cout << "Dereferenced Pointer: " << *obj1.ptrToValue << std::endl;

    // For obj2
    std::cout << "Object 2:" << std::endl;
    std::cout << "Value: " << obj2.value << std::endl;
    std::cout << "Pointer to Value: " << obj2.ptrToValue << std::endl;
    std::cout << "Dereferenced Pointer: " << *obj2.ptrToValue << std::endl;

    return 0;
}

