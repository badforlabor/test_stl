#include <iostream>

int main() 
{
	std::cout << "start..." << std::endl;

	extern void TestCast();
	TestCast();

	extern void TestSizeof();
	TestSizeof();

	extern void TestMap();
	TestMap();

	extern void TestTuple();
	TestTuple();

	extern void TestIO();
	TestIO();


	std::cout << "end" << std::endl;
	return 0;
}
