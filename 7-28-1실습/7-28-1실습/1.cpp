#include <iostream>
using namespace std;
class Visitors {
private:
    int num;
public:
    Visitors();
    void addNum(int temp);
    int getNum() const;
};
Visitors::Visitors()
    : num{ 0 } {}
void Visitors::addNum(int temp) { num += temp; }
int Visitors::getNum() const { return num; }

int main(void) {
    Visitors visitors;
    int temp;

    cout << "������ ��� ���� ����� �ּ���: ";
    while (cin >> temp)
    {
        if (temp >= 0)
            visitors.addNum(temp);
        cout << "������ ��� ���� ����� �ּ���(���� ����� EOF): ";
    }

    cout << "\n������ ���尴 ���� " << visitors.getNum() << "�� �Դϴ�.";
    return 0;

}