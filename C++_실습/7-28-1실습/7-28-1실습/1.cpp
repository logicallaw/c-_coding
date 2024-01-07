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

    cout << "입장한 사람 수를 기록해 주세요: ";
    while (cin >> temp)
    {
        if (temp >= 0)
            visitors.addNum(temp);
        cout << "입장한 사람 수를 기록해 주세요(영업 종료시 EOF): ";
    }

    cout << "\n오늘의 입장객 수는 " << visitors.getNum() << "명 입니다.";
    return 0;

}