#include <iostream>
int main(void)
{
	double a = 10.5;
	std::cout << "a: " << a << std::endl;

	a = static_cast<int>(a);
	std::cout << "static_cast<int>(a): " << a << std::endl; //10
	std::cout << "static_cast<int>(a) + 1: " << a+1 << std::endl; //11
	return 0;
}