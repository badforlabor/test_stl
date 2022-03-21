#include <vector>
#include <iostream>

void TestVector()
{
	std::vector<int> Arr = { 1,2,3,4,5 };

	for (int i = Arr.size() - 1; i >= 0; i--)
	{
		if (Arr[i] == 5 || Arr[i] == 3)
		{
			Arr.erase(Arr.begin() + i);
		}
	}

	std::cout << Arr.size() << std::endl;
}