#include <iostream>

int main() {
    int x = 42;
    int y = 10;

    int& ref = x; // ������ ref�� �ʱ⿡�� x�� ������

    ref *= 2;
    std::cout << "ref�� ��: " << x << std::endl;



    return 0;
}
