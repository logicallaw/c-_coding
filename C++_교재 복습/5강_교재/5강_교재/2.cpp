#include <iostream>
using namespace std;
int main(void)
{
	//int a = 5.12; C++93/03 style
	int x(3.14); //C+93/03 style초기화시 발생가능한 혼동 방지하고 명확성 높이는데 도움된다.
	cout << x;
	
	return 0;
}