#include <iostream>
using namespace std;
int main(void) {
	int size;
	cin >> size;

	string word;
	for (int i{ 0 }; i < size; i++)
	{
		cin >> word;
		cout << word[0] << word[word.length() - 1] << endl;
	}
	return 0;
}