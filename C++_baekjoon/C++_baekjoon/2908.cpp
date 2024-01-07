#include <iostream>
using namespace std;
void swap(char num[]);
void result(char n1[], char n2[]);
int main(void) {
	char n1[3], n2[3];
	cin >> n1 >> n2;
	swap(n1);
	swap(n2);
	result(n1, n2);

}
void swap(char num[]) {
	char temp = num[0];
	num[0] = num[2];
	num[2] = temp;
}
char result(char n1[], char n2[]) {
	for (int i{ 2 }; i >= 0; i--)
	{
		if (n1[i] > n2[i])
		{
			cout << n1;
			break;
		}
		else if (n1[i] < n2[i])
		{
			cout << n2;
			break;
		}
	}
}