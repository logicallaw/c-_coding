#include <iostream>
using namespace std;
int main(void)
{
	unsigned int counter{ 1 };
	while (counter <= 10)
	{
		cout << counter << " ";
		++counter; //counter += 1°ú µ¿ÀÏ 
	}
	return 0;
}