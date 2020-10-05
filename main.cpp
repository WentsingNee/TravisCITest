#include <kerbal/container/list.hpp>
#include <iostream>

int main()
{
	kerbal::container::list<int> l;
	for (int i = 0; i < 10; ++i) {
		l.push_back(i);
	}
	for (auto e : l) {
		std::cout << e << std::endl;
	}
}
