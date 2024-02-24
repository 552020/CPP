#include <sstream>
#include <iostream>

int main() {
    int value = 42;
    std::ostringstream oss;
    oss << "The answer is: " << value;
    std::cout << oss.str() << std::endl;
}

