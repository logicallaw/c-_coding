#include <iostream>
#include <cstring>
using namespace std;
int main(void) {
    int size;
    cout << "책의 권수를 입력해 주세요: ";
    cin >> size;
    cin.ignore(); //아래 getline으로 받을거면 앞에서 버퍼 지워야됨.
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
