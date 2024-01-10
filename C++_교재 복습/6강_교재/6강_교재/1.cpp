#include <iostream>

int main() {
    int x = 42;
    int y = 10;

    int& ref = x; // 참조자 ref는 초기에는 x를 참조함

    ref *= 2;
    std::cout << "ref의 값: " << x << std::endl;



    return 0;
}
