#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void swap(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
void bubble_sort(int numbers[], const int& size) {
	for (int i{ 0 }; i < size - 1; i++)
		for (int j{ 0 }; j < size - 1 - i; j++)
			if (numbers[j] < numbers[j + 1])
				swap(numbers[j], numbers[j + 1]);
}
int main(void) {
	srand(time(0));
	const int SIZE = 6;
	int numbers[SIZE]{};
	for (int i{ 0 }; i < SIZE; i++) {
		int temp = rand() % 46 + 1;
		for (int j{ 0 }; j <= i; j++)
			if (numbers[j] == temp && numbers[j] != 0)
				i--;
			else if (numbers[j] != temp && numbers[j] == 0)
				numbers[j] = temp;
	}
	bubble_sort(numbers, SIZE);
	for (int& n : numbers)
		cout << n << " ";
	return 0;

}