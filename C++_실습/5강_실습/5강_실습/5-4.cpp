/*
int size;
unsigned int num;

int�� �Է¹��� ������ ����size �Է¹޴´�.
(����:do~while��)
size�� ���� for�� ����
���� ū��numMax�� ������numMin ���
if (!(counter))
		unsigned int numMax = num, numMin = num;
for (unsigned int counter {0} ; counter < size ; counter++)
	cout << "������ �Է��ϼ���: " << endl;
	cin >> num;
	if (!(counter)) //ó�����ุ ����
		unsigned int numMax = num, numMin = num;
	numMax = (numMax >= num) ? numMax : num;
	numMin = (numMin <= num) ? numMin : num;

*/
#include <iostream>
using namespace std;
int main(void)
{
	int size;
	unsigned int num, numMax, numMin; 
	do
	{
		cout << "������ ������ ���� ������ �Է��ϼ���: ";
		cin >> size;
	} while (size < 1);

	cout << endl;

	for (unsigned int counter{ 0 }; counter < size; counter++)
	{
		cout << "������ �Է��ϼ���: ";
		cin >> num;
		if (counter == 0) //ó�����ุ ����
		{
			numMax = num;
			numMin = num;
		}
		numMax = (numMax >= num) ? numMax : num;
		numMin = (numMin <= num) ? numMin : num;
	}

	cout << "\n�ִ� = " << numMax;
	cout << "\n�ּڰ� = " << numMin;

	return 0;
}