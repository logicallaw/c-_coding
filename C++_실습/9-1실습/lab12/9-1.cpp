#include <iostream>
using namespace std;
class Fraction {
private:
	double x, y;
	double num;
public:
	Fraction();
	Fraction(const Fraction& origin);
	void inputFraction();
	double getNum() const;
	double getX() const { return x; }
	double getY() const { return y; }
};
void Fraction::inputFraction() {
	cout << "Input numerator and demerator: ";
	cin >> x >> y; //x�� y�� ���� �����մϴ�.
	num = x / y; //�м��� ũ�⸦ �����մϴ�.
	cout << x << "|" << y << "|" << num << endl;
}
Fraction::Fraction()
	:x{ 0 }, y{ 0 }, num{ 0 } {}

Fraction::Fraction(const Fraction& origin)
	:x{ origin.x }, y{ origin.y }, num{ origin.num } {}

double Fraction::getNum() const {
	return num;
}

void bubble_sort(Fraction numbers[], int size);
void swap(Fraction* f1, Fraction* f2);

void bubble_sort(Fraction numbers[], int size) {
	for (int i{ 0 }; i < size - 1; i++)
		for (int j{ 0 }; j < size - 1 - i; j++)
			if (numbers[j].getNum() > numbers[j + 1].getNum())
			{
				cout << "HI" << endl;
				cout << numbers[j].getNum() << " " << numbers[j + 1].getNum() << endl;
				swap(&numbers[j], &numbers[j + 1]);
				cout << numbers[j].getNum() << " " << numbers[j + 1].getNum() << endl;
			}
}

void swap(Fraction* f1, Fraction* f2) {
	Fraction temp{ *f1 }; //Fraction{x,y,num}
	*f1 = Fraction{ *f2 };
	*f2 = Fraction{ temp };
}

int main(void) {
	Fraction numbers[4]; //�⺻�����ڷ� �� ��ü �����ȴ�.
	for (Fraction& number : numbers)
		number.inputFraction(); //�� �迭�� ��ȸ�ϸ� �� ��ü�� �����մϴ�.

	bubble_sort(numbers, 4);
	cout << endl;
	for (int i{ 0 }; i < 4; i++)
	{
		cout << "Fraction " << i + 1 << ": " << numbers[i].getX() << "/" << numbers[i].getY() << endl;
	}
}