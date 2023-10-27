#include <iostream>
#include <vector>
#include <string>

int main()
{
	// Using  new and delete for a single int
	int *singleInt = new int;
	*singleInt = 42;
	std::cout << "Single int value: " << *singleInt << std::endl;
	delete singleInt; // delete without []

	// Using new[] and delete[] foer an array of ints
	int *intArray = new int[3];
	intArray[0] = 1;
	intArray[1] = 2;
	intArray[2] = 3;
	std::cout << "Array values: " << intArray[0] << ", " << intArray[1] << ", " << intArray[2] << std::endl;
	delete[] intArray;
	std::vector<int> intVector;
	intVector.push_back(4);
	intVector.push_back(5);
	intVector.push_back(6);
	std::cout << "Vector values: ";
	for (size_t i = 0; i < intVector.size(); ++i)
	{
		std::cout << intVector[i] << " ";
	}
	std::cout << std::endl;
	// No need to manually delete memory for std::vector, it hanldes its own memory
	// Using std::string
	std::string myString = "Hello, C++!";
	std::cout << "String value: " << myString << std::endl;
	// No need to manually delete memory for std::string, it hanldes its won memory
	return (0);
}
