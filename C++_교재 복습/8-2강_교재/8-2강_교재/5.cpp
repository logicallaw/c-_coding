#include <iostream>
#include <array>
using namespace std;
int main(void)
{
	//size_t size = 0;
	int a[5]{ 1 };
	//cout << typeid(a.size()).name() << endl;
	cout << a[0] << " " << a[1] << endl;

 	array<double, 5> b = { 1,1,1,1,1};
	for (double& c : b)
		cout << c << " ";
	cout << endl;
}