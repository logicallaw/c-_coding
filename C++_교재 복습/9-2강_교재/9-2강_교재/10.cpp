#include <stdio.h>
#include <string.h>
//문자열을 대입하는 strcpy함수
int main(void)
{
	char str1[80] = "cat";
	char str2[80];

	strcpy_s(str1, "tiger");
	strcpy_s(str2, str1);
	printf("%s, %s\n", str1, str2);

	return 0;
}