#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
    int size;
    cout << "å�� �Ǽ��� �Է��� �ּ���: ";
    cin >> size;
    cin.ignore(); //�Ʒ� getline���� �����Ÿ� �տ��� ���� �����ߵ�.
    char** chars = new char* [size];
    for (int i{ 0 }; i < size; i++) {
        char temp[100];
        cin.getline(temp, 100, '\n');
        chars[i] = new char[strlen(temp)];
        if (strncmp("Harry Potter and the", temp, 20) == 0)
            chars[i] = temp + 21;
        else
            chars[i] = temp;
    }
    cout << "\nHarry Potter Series List===\n";
    for (int i{ 0 }; i < size; i++)
    {
        cout << chars[i] << endl;
    }

    for (int i{ 0 }; i < size; i++)
        delete[] chars[i];
    delete[] chars;

    return 0;

}
