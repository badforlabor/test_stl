
#include <map>
#include <iostream>

void TestMap()
{
	std::map<int, int> v;

	std::cout << v[0] << std::endl;

	v[0]++;

	std::cout << v[0] << std::endl;
}