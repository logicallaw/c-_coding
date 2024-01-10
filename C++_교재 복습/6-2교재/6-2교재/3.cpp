#include <iostream>
int globalNum = 10;
int main(void)
{
	int globalNum = 5;
	std::cout << globalNum << std::endl;
	std::cout << ::globalNum << std::endl;

	return 0;
}