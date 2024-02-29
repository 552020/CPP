# Orthodox Canonical Form

## Definition

The Orthodox Canonical Form is a term coined to refer to a class that defines (at least) the following member functions:

- **Default Constructor**
- **Copy Constructor**
- **Copy Assignment Operator**
- **Destructor**

C++11 addes two extra special member functions: the `Move Constructor`, `Move Assignment Operator`

The term was created by James Coplien in his book "Advanced C++: Programming Styles and Idioms" (1992);

All these members functions are defined by design, which means that if we don't explicitly define them, the compiler will create them for us, with certain specific behaviours. For example the copy constructor will create 'shallow copy' instead of 'deep copies' (TODO: test this) of the copied object.

## Default Constructor

A default constructor in C++ is a constructor that can be called without providing any arguments. It is automatically provided by the compiler if no other constructors are explicitly defined within the class.

The default constructor initializes the object's members with default values: numeric types are set to zero, pointers are set to nullptr, and members of class type are initialized with their respective default constructors.

The default constructor of a class in C++ can be declared as public, protected, or private. Public is the most common scenario.

## Copy Constructor

Ensure a deep copy of an instance of a class. A deep copy means that the two objects don't share memory at all. They have merely the same values. The Copy Constructor is part of the language.

### Syntax

If a custom copy constructor operator is not defined the default one will be called.
The copy constructor is called on object initialisation (it is a constructor!) and it is called when a const reference of an object of the same class is passed as parameter, or if we have an assigment with `=`.

- Definition: `MyClass(const MyClass &other);`
- Call:
  - `MyClass newObj(oldObj);` // We don't need to create explicity a reference of the object. It will be create on the fly.
  - `newObj = oldObj;`

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

- **Purpose:** Copy constructors are special class member functions responsible for creating a new object as a copy of an existing object of the same class.
- **When they're used:**
  - **Initialization:** When you declare a new object and initialize it with an existing object (`Object2 myObject2 = myObject1;`)
  - **Passing objects by value:** To avoid unintended changes to the original when a function takes the object as an argument.
  - **Returning objects by value:** When a function returns an object of the class.

**Example 1: Simple copy**

```c++
class MyClass {
   int value;
public:
   MyClass(int val) : value(val) {}  // Normal constructor

   // Copy constructor
   MyClass(const MyClass& other) : value(other.value) {}
};
```

**Example 2: Deep copy (for dynamic memory)**

```c++
class MyClass {
   int *data;
public:
   MyClass(int size) { data = new int[size]; } // Allocate memory

   // Copy constructor (deep copy)
   MyClass(const MyClass& other) {
       data = new int[other.size];  // Allocate new memory for the copy
       for (int i = 0; i < other.size; i++) {
           data[i] = other.data[i];
       }
   }

   ~MyClass() { delete[] data; } // Destructor to free memory
};
```

- **Note:** The default copy constructor does a shallow copy (memberwise copy). For classes with dynamically allocated resources, you typically need a custom copy constructor to perform a deep copy to avoid issues with shared ownership.

## Copy assigment operator

## Destructor

**Destructors: The Cleanup Crew**

- **Purpose:** Destructors are special class member functions that are automatically called when an object of the class is destroyed (goes out of scope or is deleted with `delete`).
- **Key Responsibilities:**
  - **Resource Management:** Deallocate memory (used with `new`) and release other resources like files, network connections, etc. Prevents memory leaks and resource exhaustion.
  - **Maintaining Invariants:** Ensure the class is in a consistent, valid state before destruction.
  - **Exception Safety:** Provide cleanup guarantees even if errors (exceptions) occur.

**Why they matter:** Destructors ensure reliable, automatic cleanup and maintain program stability, reducing the risk of human error in resource management.
