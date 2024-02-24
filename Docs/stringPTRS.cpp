#include <iostream>
#include <string>
#include <cstdio> // For printf

int main() {
    std::string string = "HI THIS IS BRAIN";

    // Pointer to std::string object
    std::string *stringPTR = &string;

    // Pointer to the first character of the string
    char *stringFirstCharPTR = &string[0];

    // Printing the string via the std::string pointer
    std::cout << "String via stringPTR: " << *stringPTR << std::endl;
    std::cout << "Address of stringPTR: " << static_cast<void*>(stringPTR) << std::endl;

    // Printing the first character via the character pointer
    std::cout << "First character via stringFirstCharPTR: " << *stringFirstCharPTR << std::endl;
    std::cout << "Address of stringFirstCharPTR: " << static_cast<void*>(stringFirstCharPTR) << std::endl;
		// Printing the entire string via the character pointer using std::cout
    std::cout << "Entire string via stringFirstCharPTR (std::cout): " << stringFirstCharPTR << std::endl;

    // Printing the entire string via the character pointer using printf
    printf("Entire string via stringFirstCharPTR (printf): %s\n", stringFirstCharPTR);

    return 0;
}

