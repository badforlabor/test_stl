#include <iostream>

int main() 
{
	std::cout << "start..." << std::endl;

	extern void TestTuple();
	TestTuple();

	std::cout << "end" << std::endl;
	return 0;
}
