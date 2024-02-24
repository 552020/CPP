#include <iostream>

class MyClass {
public:
	int value;
}

int main() {
	MyClass obj;
	obj.value = 10;

	int MyClass::*ptrToValue = &MyClass::value;
	std::count << obj.*ptrToValue << std::endl;
}
