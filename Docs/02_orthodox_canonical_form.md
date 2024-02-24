# Orthodox Canonical Form

The Orthodox Canonical Form is a term coined to refer to a class that defines the following member functions:

- **Default Constructor**
- **Copy Constructor**
- **Copy Assignment Operator**
- **Destructor**

C++11 addes two extra special member functions: the `Move Constructor`, `Move Assignment Operator`

The term was created by James Coplien in his book "Advanced C++: Programming Styles and Idioms" (1992);

All these members functions are defined by design, which means that if we don't explicitly define them, the compiler will create them for us, with certain specific behaviours. For example the copy constructor will create 'shallow copy' instead of 'deep copies' of the copied object.

## Default Constructor

A default constructor in C++ is a constructor that can be called without providing any arguments. It is automatically provided by the compiler if no other constructors are explicitly defined within the class.

The default constructor initializes the object's members with default values: numeric types are set to zero, pointers are set to nullptr, and members of class type are initialized with their respective default constructors.

The default constructor of a class in C++ can be declared as public, protected, or private. Public is the most common scenario.

## Copy Constructor

The Copy Constructor is part of the language.

Ensure a deep copy of an instance of a class. A deep copy means that the two objects don't share memory at all. They have merely the same values.

```c++
class MyClass {
public:
    int* data;
    MyClass(int val) {
        data = new int(val); // Allocate resource
    }
    // Deep copy constructor
    MyClass(const MyClass& other) {
        data = new int(*other.data); // Allocate new resource and copy value
    }
    ~MyClass() {
        delete data; // Release resource
    }
    // Possibly define copy assignment operator as well for full OCF
};

```

## Copy assigment operator
