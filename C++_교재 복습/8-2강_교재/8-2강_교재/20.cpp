#include <iostream>
#include <vector>
#include <array>
using namespace std;
void printVector(vector<int> v1);
int main(void) {
	vector<int> v1;
	vector<int> v2{};
	int nums[5];

	array<int, 5> arr ;
	v1.push_back(0);
	printVector(v1);
	for (const int& v :v2)
		cout << v << " ";

}
void printVector(vector<int> v1) {
	v1.push_back(1);
}