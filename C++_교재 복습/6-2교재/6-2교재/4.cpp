#include <iostream>
using namespace std;

void useLocal();
void useStaticLocal();
void useGlobal();

int x{ 1 }; //전역 변수 선언

int main(void)
{
	cout << "global x in main is " << x << endl; //내부 블록 변수 선언 전이라 전역 변수 가져옴
	int x{ 5 };
	cout << "local x in main is " << x << endl; //내부 블록 중복이름 선언해서 전역 변수 안가져옴
	{
		int x{ 7 };
		cout << "local x in main is " << x << endl; //변수 가려짐에 의해 7이 출력됨.
	}
	cout << "local x in main is " << x << endl; //5가 출력됨

	useGlobal();
	useStaticLocal();
	useGlobal();
	useLocal();
	useStaticLocal();
	useGlobal();

	cout << "\nlocal x in main is " << x << endl;
	return 0;
}

void useLocal()
{
	int x{ 5 };
	cout << "\nlocal x is " << x << endl; // 5
	++x;
	cout << "local x is " << x << endl;
}

void useStaticLocal() //이 함수 내부에서만 50변수 사용
{
	static int x{ 50 };
	cout << "\nlocal static x is " << x << " on entering useStaticLocal" << endl;
	++x;
	cout << "\nlocal static x is " << x << " on entering useStaticLocal" << endl;
}

void useGlobal() //전역변수 1에 접근함
{
	cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
	x *= 10;
	cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
}