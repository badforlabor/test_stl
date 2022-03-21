
#include <map>
#include <iostream>
#include <unordered_map>

void TestMap()
{
	std::map<int, int> v;

	std::cout << v[0] << std::endl;

	v[0]++;

	std::cout << v[0] << std::endl;

	std::unordered_map<int, int> v2;
	std::cout << v2[0] << std::endl;
}