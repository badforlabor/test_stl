
#include <iostream>
using namespace std;

extern void TestSizeof()
{
	cout << sizeof(int) << endl;
	cout << sizeof(long) << endl;

	cout << sizeof(size_t) << endl;
	cout << sizeof(void*) << endl;

	cout << sizeof(long long) << endl;

}
