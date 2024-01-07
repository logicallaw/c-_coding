#include <iostream>
using namespace std;
class Book{
private:
	int _bookNumber, _publicationYear;
	string _title, _author, _publisher, _genre;
	bool _borrowed;
public:
	Book() = default;
	Book(int bookNumber, string title, string author,
		string publisher, int publicationYear, string genre);
	void borrowBook();
	void returnBook();
	int getBookNumber() const;
	string getTitle() const;
	bool isBorrowed() const;
	void printBookInfo() const;
};

class Library {
private:
	Book books[10];
	int numBooks = 0;
public:
	void addBook(Book book);
	void borrowBook(int bookNumber);
	void returnBook(int bookNumber);
	void printBorrowedBooks();
};
void Library::addBook(Book book)
{
	books[numBooks++] = book;
}
void Library::borrowBook(int bookNumber) {
	books[bookNumber - 1].borrowBook();
}

Book::Book(int bookNumber, string title, string author,string publisher, int publicationYear, string genre)
	: _bookNumber{ bookNumber }, _title{ title }, _author{ author },
	_publisher{ publisher }, _publicationYear{ publicationYear }, _genre{ genre }, _borrowed{ 0 } {}

int Book::getBookNumber() const { return _bookNumber; }
void Book::borrowBook() {
	if (isBorrowed())
		cout << "���� ���� ���Դϴ�." << endl << endl;
	else
	{
		_borrowed = 1;
		cout << "å " << getTitle() << "��/�� �����߽��ϴ�." << endl << endl; 
	}
}
void Library::returnBook(int bookNumber) {
	books[bookNumber - 1].returnBook();
}
void Book::returnBook() {
	if(isBorrowed())
	{
		_borrowed = 0;
		cout << "å " << getTitle() << "��/�� �ݳ��Ͽ����ϴ�." << endl << endl;
	}
	else
		cout << "�ݳ� �Ұ����� å�Դϴ�." << endl << endl;
}
string Book::getTitle()  const { return _title; }
void Library::printBorrowedBooks() {
	for (int i{ 0 }; i < numBooks ; i++)
	{
		if(books[i].isBorrowed())
			books[i].printBookInfo();
	}
	cout << endl;
}
bool Book::isBorrowed() const {
	if (_borrowed)
		return 1;
	else
		return 0;
}

void Book::printBookInfo() const {
	string borrowed;
	if (isBorrowed())
		borrowed = "������";
	else
		borrowed = "���� ����";
	cout << getBookNumber() << " / " << getTitle() << " / " << _title << " / " <<
	_author << " / " << _publisher << " / " << _publicationYear << " / " << _genre << " / " << borrowed << endl;
}
void menu();
void menu() {
	cout << "===== ������ �ý��� =====" << endl;
	cout << "1. �����ϱ�" << endl;
	cout << "2. �ݳ��ϱ�" << endl;
	cout << "3. ������ å ��� ����ϱ�" << endl;
	cout << "4. �����ϱ�" << endl;
	cout << "\n�޴��� �����ϼ���: ";
}
int main(void)
{
	int cmd, bookNumber;
	Library lib;
	lib.addBook(Book{1, "å1", "����1", "���ǻ�1", 2021, "�帣1"});
	lib.addBook(Book{2, "å2", "����2", "���ǻ�2", 2022, "�帣2"});
	lib.addBook(Book{3, "å3", "����3", "���ǻ�3", 2023, "�帣3"});

	menu();
	while(cin >> cmd && cmd != 4) //1,2,3�� ����, 4���Է½� ����.
	{
		switch(cmd) {
		case 1:
			cout <<"������ å ��ȣ�� �Է��ϼ���: ";
			cin >> bookNumber;
			lib.borrowBook(bookNumber);
			break;
		case 2:
			cout <<"�ݳ��� å ��ȣ�� �Է��ϼ���: ";
			cin >> bookNumber;
			lib.returnBook(bookNumber);
			break;
		case 3:
			cout << "������ å ���:" << endl;
			lib.printBorrowedBooks();
			break;
		}
		menu();
	}

	return 0;
}
