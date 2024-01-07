//built-in-array
#include <iostream>
using namespace std;
int main(void) {
	int numMax = 0;
	int numMaxIndex[2];

	//최댓값이 되는 값과 위치를 입력받으면서 찾습니다.
	int temp;
	for (int i{ 0 }; i < 9; i++)
		for (int j{ 0 }; j < 9; j++)
		{
			cin >> temp;
			if (numMax <= temp) {
				numMax = temp;
				numMaxIndex[0] = i + 1;
				numMaxIndex[1] = j + 1;
			}
		}

	cout << numMax << endl;
	cout << numMaxIndex[0] << " " << numMaxIndex[1];
	return 0;
}