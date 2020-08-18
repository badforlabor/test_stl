#include <tuple>
#include <iostream>
#include <utility>

template <typename = void>
constexpr std::size_t sum_helper()
{
	return 0u;
}

template <std::size_t I0, std::size_t ... Is>
constexpr std::size_t sum_helper()
{
	return I0 + sum_helper<Is...>();
}

template <typename ... Ts>
constexpr std::size_t sum_size(std::tuple<Ts...> const &)
{
	return sum_helper<sizeof(Ts)...>();
}

using TupleType = std::tuple<int, float, std::string>;

template<class _Tuple>
struct tuple_size2;

template<class... _Types>
struct tuple_size2<std::tuple<_Types...>>
{
	enum 
	{
		// 使用sizeof...(exp)操作符
		count = sizeof...(_Types)
	};
};

// 递归计算
template<typename ...Types>
struct tuple_size3;

template<>
struct tuple_size3<std::tuple<>>
{
	enum
	{
		count = 0
	};
};

template<typename T, typename... Types>
struct tuple_size3<std::tuple<T, Types...>>
{
	typedef tuple_size3<Types...> _Mybase;
	enum
	{
		count = 1 + tuple_size3<std::tuple<Types...>>::count
	};
};





void TestTuple()
{
	TupleType a;

	// 元素个数
	std::cout << std::tuple_size<TupleType>::value << std::endl;
	std::cout << tuple_size2<TupleType>::count << std::endl;
	std::cout << tuple_size3<TupleType>::count << std::endl;

	// 内存大小
	std::cout << sum_size(a) << std::endl;
	std::cout << sizeof(a) << std::endl;
}


