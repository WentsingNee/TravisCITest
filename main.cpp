#include <kerbal/container/list.hpp>
#include <kerbal/random/mersenne_twister_engine.hpp>

#include <iostream>

int main()
{
	kerbal::random::mt19937 eg;
	kerbal::container::list<int> l = KERBAL_ILIST(0, 1, 2, 3);

	for (int i = 0; i < 100; ++i) {
		l.push_back(eg());
	}

	l.sort();

	for (auto e : l) {
		std::cout << e << std::endl;
	}
}
