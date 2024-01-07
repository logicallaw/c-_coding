#include <iostream>
using namespace std;
int main(void) {
	int size;
	string num;
	cin >> size >> num;

	int sumNum = 0;
	for (int i{ 0 }; i < num.length(); i++)
		sumNum += (*(num.begin() + i) - '0');
	
	cout << sumNum;
	return 0;
}