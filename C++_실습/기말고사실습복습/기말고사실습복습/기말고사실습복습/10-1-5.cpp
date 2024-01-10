#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
	int size;
	cout << "책의 권수를 입력해 주세요: ";
	cin >> size;
	cin.ignore();

	char** books = new char*[size];
	for (int i{ 0 }; i < size; i++)
	{
		char temp[101];
		cin.getline(temp, sizeof(temp));
		books[i] = new char[101];
		if (strncmp(temp, "Harry Potter and the ", 21) == 0)
		{
			//books[i] = temp + 6;
			strcpy_s(books[i], 101, temp + 21);
			cout << temp + 21 << endl;
		}
		else
		{
			//books[i] = temp;
			strcpy_s(books[i], 101, temp);
		}
	}

	cout << endl << "junho series List===\n";
	for (int i{ 0 }; i < size; i++) {
		cout << books[i] << endl;
		delete[] books[i];
	}

	delete[] books;
}