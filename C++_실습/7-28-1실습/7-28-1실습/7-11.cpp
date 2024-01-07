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
	Rectangle rectangle[100]; //반환형이 Rectangle형인 배열을 선언한다.
	//rectangle배열은 객체를 저장하는 배열이다.

	int row, col;
	int i = 0;

	cout << "사각형의 가로와 세로를 입력하세요(종료 : 0)." << endl;
	while (i < 100) //0이 입력되면 종료
	{
		cin >> row;
		if (row == 0) break;
		cin >> col;
		//이름없는 객체는 Class-type{};로 선언하면 된다.
		rectangle[i] = Rectangle{row, col, i + 1};
		i++;
	}
	
	cout << endl << "사각형의 총 개수: " << i << endl;
	for (int j{ 0 }; j < i; j++)
	{
		rectangle[j].print();
	}
}

Rectangle::Rectangle(int row, int col, int name)
	: _row{ row }, _col{ col }, _name{ name } {}
void Rectangle::print() const {
	cout << "사각형 " << _name << ": 가로=" << _row << ", 세로=" << _col
		<< ", 면적=" << _row * _col << ", 둘레=" << 2 * (_row + _col) << endl;
}