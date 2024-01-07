#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;
void swap(int& a, int& b);
void bubble_sort(int numbers[], int size);
void check(int numbers[], const int number, int& cnt);
void process(int numbers[], int size) {
	for (int i{ 0 }; i < size; i++)
	{
		numbers[i] = rand() % 45 + 1;
		for (int j{ 0 }; j < i; j++)
			if (numbers[i] == numbers[j])
				i--;
	}
	
}
int main(void) {
	srand(time(0));
	const int size{ 6 };
	int numbers[size]{};
	for (int i{ 0 }; i < 6; i++)
		check(numbers, rand() % 45 + 1, i);
	bubble_sort(numbers, size);
	for (int& number : numbers)
		cout << number << " ";
	return 0;

}
void bubble_sort(int numbers[], int size) {
	for (size_t i{ 0 }; i < size - 1; ++i)
		for (size_t j{ 0 }; j < size - 1 - i; ++j)
			if (numbers[j] > numbers[j + 1])
				swap(numbers[j], numbers[j + 1]);
}
void swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

void check(int numbers[], const int number, int& cnt) {
	for (int i{ 0 }; i < 6; i++)
	{
		//새로운값이면 값 저장
		if (numbers[i] == 0)
		{
			numbers[i] = number;
			break;
		}
		//기존값과 비교.(순회)(중복체크)
		else if (numbers[i] == number)
		{
			cnt--;
			break;
		}
	}
}