#include <stdio.h>
//�� ���� A�� B�� �Է¹��� ����, A/B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//C
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	//�� ��ȯ�� double(����)�� �ƴ϶� (double)�������� ��������.
	printf("%.10\n", ((double)a / b));

	return 0;
}