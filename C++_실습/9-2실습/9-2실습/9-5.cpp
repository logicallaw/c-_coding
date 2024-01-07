#include <iostream>
using namespace std;
bool isPrime(int n) {
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}

int main(void) {
	int n;
	cout << "N을 입력하세요: ";
	cin >> n;

	int** arr = new int* [n];
	arr[0] = nullptr;
	arr[1] = nullptr;
	int primes = 0;
	for (int i = 2; i < n; i++)
		if (isPrime(i))
			primes++;
	int* primelist = new int[primes];
	int idx = 0;
	for (int i = n - 1; i >= 2; i--)
		if (isPrime(i))
			primelist[idx++] = i;
	arr[n - 1] = primelist;
	for (int i = n - 2; i >= 2; i--)
		if (arr[i + 1][0] > i)
			arr[i] = arr[i + 1] + 1;
		else
			arr[i] = arr[i + 1];
	for (int i = 0; i < n; i++) {
		cout << i << ": ";
		if (arr[i] == nullptr)
			cout << endl;
		else {
			int idx = 0;
			do {
				cout << arr[i][idx] << " ";
			} while (arr[i][idx++] != 2);
			cout << endl;
		}
	}
	delete[] primelist;
	delete[] arr;
}