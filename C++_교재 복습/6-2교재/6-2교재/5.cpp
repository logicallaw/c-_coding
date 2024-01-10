#include <iostream>
using namespace std;

inline double cube(const double& side);

int main(void)
{
	double sidevalue = 5.5;
	cout << "Volume of cube with side " << sidevalue << " is " << cube(sidevalue) << endl;

	cout << "Volume of cube with side " << 3.5 << " is " << cube(3.5) << endl;

	return 0;
}

inline double cube(const double& side)
{
	return side * side * side;
}