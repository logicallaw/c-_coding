#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
int main(void) {
	int n;
	cin >> n;
	cin.ignore();

	vector<char*> namelist;
	
	for (int i{ 0 }; i < n; i++) {
		char* name = new char[21];
		cin.getline(name, 21);
		namelist.push_back(name);
	}

	for (int i{ 0 }; i < n; i++) {
		cout << namelist[i] << endl;
	}
	for (int i{ 0 }; i < n; i++) {
		delete[] namelist[i];
	}
}