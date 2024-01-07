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
		cout << "현재 대출 중입니다." << endl << endl;
	else
	{
		_borrowed = 1;
		cout << "책 " << getTitle() << "을/를 대출했습니다." << endl << endl; 
	}
}
void Library::returnBook(int bookNumber) {
	books[bookNumber - 1].returnBook();
}
void Book::returnBook() {
	if(isBorrowed())
	{
		_borrowed = 0;
		cout << "책 " << getTitle() << "을/를 반납하였습니다." << endl << endl;
	}
	else
		cout << "반납 불가능한 책입니다." << endl << endl;
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
		borrowed = "대출중";
	else
		borrowed = "대출 가능";
	cout << getBookNumber() << " / " << getTitle() << " / " << _title << " / " <<
	_author << " / " << _publisher << " / " << _publicationYear << " / " << _genre << " / " << borrowed << endl;
}
void menu();
void menu() {
	cout << "===== 도서관 시스템 =====" << endl;
	cout << "1. 대출하기" << endl;
	cout << "2. 반납하기" << endl;
	cout << "3. 대출한 책 목록 출력하기" << endl;
	cout << "4. 종료하기" << endl;
	cout << "\n메뉴를 선택하세요: ";
}
int main(void)
{
	int cmd, bookNumber;
	Library lib;
	lib.addBook(Book{1, "책1", "저자1", "출판사1", 2021, "장르1"});
	lib.addBook(Book{2, "책2", "저자2", "출판사2", 2022, "장르2"});
	lib.addBook(Book{3, "책3", "저자3", "출판사3", 2023, "장르3"});

	menu();
	while(cin >> cmd && cmd != 4) //1,2,3번 유지, 4번입력시 종료.
	{
		switch(cmd) {
		case 1:
			cout <<"대출할 책 번호를 입력하세요: ";
			cin >> bookNumber;
			lib.borrowBook(bookNumber);
			break;
		case 2:
			cout <<"반납할 책 번호를 입력하세요: ";
			cin >> bookNumber;
			lib.returnBook(bookNumber);
			break;
		case 3:
			cout << "대출한 책 목록:" << endl;
			lib.printBorrowedBooks();
			break;
		}
		menu();
	}

	return 0;
}
