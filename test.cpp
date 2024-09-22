#include <iostream>
#include "defer.hpp"

int main() {
	int a = 0;
	{
		defer {
			a++;
		};
		if(a != 0) {
			std::cout << "fail 1" << std::endl;
			return -1;
		}
	}

	if(a != -1) {
		std::cout << "fail 2" << std::endl;
		return -1;
	}

	std::cout << "success" << std::endl;
	return 0;
}
