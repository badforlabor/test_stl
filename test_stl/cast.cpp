#include <iostream>

namespace cast
{
	class FBase
	{
	public:
		virtual void ShowMe()
		{
			std::cout << "Base" << std::endl;
		}
	};
	class FA : public FBase
	{
	public:
		virtual void ShowMe() override
		{
			std::cout << "A" << std::endl;
		}
	};
	class FB : public FBase
	{
	public:
		virtual void ShowMe() override
		{
			std::cout << "B" << std::endl;
		}
	};
}

extern void TestCast()
{
	using namespace cast;

	FBase* p = new FA();

	{
		FB* b = static_cast<FB*>(p);
		if (b)
		{
			std::cout << "static cast. b?";
			b->ShowMe();
		}
	}
	{
		FB* b = dynamic_cast<FB*>(p);
		if (b)
		{
			std::cout << "dynamic cast. b?";
			b->ShowMe();
		}
		else
		{
			std::cout << "dynamic cast. not b";
		}
	}
	{
		if (typeid(*p) == typeid(FA))
		{
			std::cout << "typeid a";
		}
		if (typeid(*p) == typeid(FB))
		{
			std::cout << "typeid b";
		}
	}
}