#include <iostream>
using namespace std;

class Rectangle { 
private:
	int _row;
	int _col;
public:
	int getArea();
	void setRow(int row);
	void setCol(int col);
};

int main(void)
{
	Rectangle r1;
	r1.setRow(5);
	r1.setCol(10);
	cout << "row * col: " << r1.getArea() << endl;

	return 0;
}

int Rectangle::getArea() {
	return _row * _col;
}

void Rectangle::setRow(int row) {
	_row = row;
}

void Rectangle::setCol(int col) {
	_col = col;
}