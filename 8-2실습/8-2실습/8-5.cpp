#include <iostream>
using namespace std;
bool process(int param[3][3]) {
    int sum1 = 0, sum2 = 0, sum3 = 0;
    for (int i{ 0 }; i < 3; i++) {
        for (int j{ 0 }; j < 3; j++) {
            sum1 += param[i][j];
            sum2 += param[j][i];
        }
        if (sum1 != 15 || sum2 != 15)
            return 0;
        sum3 += param[i][i];
    }
    if (sum3 == 15)
        return 1;
    else
        return 0;
}
int main(void) {
    int nums[3][3];
    for (int i{ 0 }; i < 3; i++)
        for (int j{ 0 }; j < 3; j++)
            cin >> nums[i][j];
    if (process(nums)) {
        cout << endl << "마방진입니다.";
    }
    else {
        cout << endl << "마방진이 아닙니다.";
    }
    return 0;
}