#include <iostream>
using namespace std;
class Rectangle
{
private:
	int _row;
	int _col;
	int _name;
public:
	Rectangle() = default;
	Rectangle(int row, int col, int name);
	void print() const;
};

int main(void)
{
	Rectangle rectangle[100]; //��ȯ���� Rectangle���� �迭�� �����Ѵ�.
	//rectangle�迭�� ��ü�� �����ϴ� �迭�̴�.

	int row, col;
	int i = 0;

	cout << "�簢���� ���ο� ���θ� �Է��ϼ���(���� : 0)." << endl;
	while (i < 100) //0�� �ԷµǸ� ����
	{
		cin >> row;
		if (row == 0) break;
		cin >> col;
		//�̸����� ��ü�� Class-type{};�� �����ϸ� �ȴ�.
		rectangle[i] = Rectangle{row, col, i + 1};
		i++;
	}
	
	cout << endl << "�簢���� �� ����: " << i << endl;
	for (int j{ 0 }; j < i; j++)
	{
		rectangle[j].print();
	}
}

Rectangle::Rectangle(int row, int col, int name)
	: _row{ row }, _col{ col }, _name{ name } {}
void Rectangle::print() const {
	cout << "�簢�� " << _name << ": ����=" << _row << ", ����=" << _col
		<< ", ����=" << _row * _col << ", �ѷ�=" << 2 * (_row + _col) << endl;
}