#include <iostream>
using namespace std;
int main(void)
{
	int cnt = 0;
	while (cnt < 30)
	{
		if (cnt == 15)
		{
			cnt++;
			continue; //continue:�����ڵ� ������ϰ� �ٽ� �ö󰡼� while�� ����
		}
		cout << (cnt++) << endl; 
	}
	cout << "while���� ����Ǿ����ϴ�." << endl;
	return 0;
}