#include <iostream>
#include <fstream>
#include <sstream>


extern void TestIO()
{
	using namespace std;

	ifstream in("1.txt");
	stringstream ss;
	ss << in.rdbuf();

	cout << ss.str().c_str() << endl;
}