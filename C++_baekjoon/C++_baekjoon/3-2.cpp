#include <stdio.h>
//두 정수 A와 B를 입력받은 다음, A/B를 출력하는 프로그램을 작성하시오.
//C
int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	//형 변환시 double(변수)가 아니라 (double)변수임을 주의하자.
	printf("%.10\n", ((double)a / b));

	return 0;
}