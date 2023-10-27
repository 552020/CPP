#include <iostream>

class MyClass {
private:
    int* data;

public:
    MyClass() : data(new int(0)) { }

    MyClass(int val) : data(new int(val)) { }  // Additional constructor for convenience

    ~MyClass() { delete data; }

    MyClass(const MyClass& other) : data(new int(*(other.data))) { }

    MyClass& operator=(const MyClass& other) {
        if (this != &other) {
            delete data;
            data = new int(*(other.data));
        }
        return *this;
    }

    // Additional member function to print the value
    void print() const {
        std::cout << "Value: " << *data << std::endl;
    }
};

int main() {
    MyClass obj1(5);          // Create an object with value 5
    MyClass obj2 = obj1;      // Use the copy constructor
    MyClass obj3;
    obj3 = obj1;              // Use the copy assignment operator

    std::cout << "Object 1: ";
    obj1.print();

    std::cout << "Object 2 (copied from Object 1): ";
    obj2.print();

    std::cout << "Object 3 (assigned from Object 1): ";
    obj3.print();

    return 0;
}

