/*
int���� ��x�� ������ y�� �Է¹޴´�.
(�̿��� ���� �ԷµǸ� do while������ �ذ�)
x�� y�������� ����� cmath include�ϰ� pow(x,y)�� ����ϴµ�
�����÷ο츦 ������ ����Ѵ�.
�����÷ο찡 �߻��ϸ� ��� �߻��ϴ��� ���� ����Ѵ�.

ǥ�������� �ִ� intMax�����ϰ� 
��� ���ؼ� 
int x,y;
int intMax = numeric_limits(intMax)::max()
int intXY;
bool overFlow = 0;
while (cnt<y)
	intXY *= x;
	if (intXY>=intMax)
		cout << x << "^" << (++cnt) <<�����÷ο� �߻�
		overFlow = 1;
		break;
	cnt++
if (!overFlow)
	cout << x << "^" << y << " = " << intXY << endl;

x�� 1�����ٺ��� �����ؼ� y���� ���µ� 
�ʰ��ϸ� �׸��ΰ� ����ϱ�

2�� 32�� -1
32�±��� �Ұ���.
31�±����� ����.
*/
#include <iostream>
using namespace std;
int main(void)
{
	int x, y;
	int intMax = (std::numeric_limits<int>::max());
	int cnt=0;
	bool overFlow = 0;

	do
	{
		cout << "���� ���� ������ �Է����ּ���: ";
		cin >> x;
	} while (x < 1);

	do
	{
		cout << "������ ���� ������ �Է����ּ���: ";
		cin >> y;
	} while (y < 1);

	long long xyValue = 1;
	while (cnt < y) 
	{
		xyValue *= x; 
		if (xyValue >= intMax)
		{
			//cout << "if�� ����, xyValue: " << xyValue << ", intMax: " << intMax << endl;
			//������ ȯ�濡 ���� ������ �ִ��� �ٸ���.
			//���ݰ��� ��� 2�� 31�¸� �Ǵ��� �����÷ο� �߻��Ѵ�.
			//�ڵ�� �������̴�.
			cout << x << "^" << (++cnt) << "���� �����÷ο찡 �߻��߽��ϴ�." << endl;
			overFlow = 1;
			break;
		}
		cnt++;
	}

	if (!overFlow)
	{
		cout << x << "^" << y << " = " << xyValue << endl;
	}
	return 0;
}