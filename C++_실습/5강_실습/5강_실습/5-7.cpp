/*
�ΰ��� ���� �Է��� �޴´�.
ũ�� ���� ���� �ԷµǸ� �ڿ����� �Էµȴ�.
�� ���� �ִ������� ����Ѵ�.
unsigned int num1,num2,result;
�� �� �ϳ��� ���� �������Ѽ�
����������� �� ������ ���� �ִ������� �ɰŴ�.
�ᱹ�� �ݺ��� ������ ���ö����� �ؾ��Ѵ�.
�ٸ�, �ִ������� ���ٸ� ������ ã�ƾ��Ѵٴ� ������ �ִ�.
for (unsigned int counter = num1; counter >= 1; counter--)
{
	if ((num2 % counter == 0) && (counter != 1))
	{	
		result = counter;
		break;
	}
}
*/
#include <iostream>
using namespace std;
int main(void)
{
	/*
	�ݺ����� �̿��� �� ���� �ִ����� ���ϱ�(���Ʈ ���� ���)
	�ð� ���⵵: O(N)
	*/
	unsigned int num1, num2;
	cout << "N�� M�� �Է��� �ּ���: ";
	cin >> num1 >> num2;

	for (unsigned int counter = num1; counter >= 1; counter--)
	{
		if ((num1 % counter == 0) && (num2 % counter == 0))
		{
			cout << num1 << ", " << num2 << "�� �ִ�����: " << counter;
			break;
		}
	}
	return 0;
}