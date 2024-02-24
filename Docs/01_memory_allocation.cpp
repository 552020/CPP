#include <iostream>

int main(void)
{
	int *foo;
	foo = new int;
	*foo = 5;

	int *bar;
	bar = new int[5];
	for(int i = 0; i < 5; i++)
		bar[i] = i + 1;

	std::cout << *foo << std::endl;
	for(int i = 0; i < 5; i++)
	{
		std::cout << bar[i] <<std::endl;
	}

	delete foo;
	delete[] bar;

	return (0);
}


