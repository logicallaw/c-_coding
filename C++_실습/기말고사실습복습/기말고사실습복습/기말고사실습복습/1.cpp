#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <array>
using namespace std;
class Tmp {
private:
	char* str;
	//int a = 5;
	static int counter;
public:
	Tmp(string str)
		: str{ new char[str.length() + 1] } {
		for (int i{ 0 }; i < str.length(); i++)
		{
			this->str[i] = str[i];
		}
		this->str[str.length()] = '\0';
	}
	~Tmp() { delete[] str; }
	//const char* getStr() const { return str; }
	//char* getStr() const { return str; }
	int getCounter() { return counter; }
	const char* getStr() const { 
		//a++;
		//counter++;
		//cout << counter << endl;
		return str; }
};
int Tmp::counter{ 55 };
void printVector(vector<int>& param);
void printArray(array<int, 3>& arr);
void printArray(array<int, 3>& arr) {
	for (const int& a : arr)
		cout << a << " ";
	cout << endl;
}
void printmatrixArray(const array<array<int, 2>, 3>& arr);
void printmatrixArray(const array<array<int, 2>, 3>& arr) {
	for (const array<int, 2>&rows : arr)
	{
		for (const int& col : rows)
			cout << col << " ";
		cout << endl;
	}
}
void printVector(vector<int>& param) {
	for (int& p : param)
		cout << p << " ";
	cout << endl;
}

int main(void) {
	Tmp tmp{ "junho" };
	//string word = "ADBCDE";
	//int nums[10] = { -1,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 ,-1 };
	//for (int i{ 0 }; i < word.length() ; i++) {
	//	if (nums[*(word.begin() + i) - 'A'] == -1)
	//		nums[*(word.begin() + i) - 'A'] = i;
	//}
	//for (const int& num : nums)
	//	cout << num << " ";
	//cout << static_cast<char>('a' - 32) << endl; //65
	
	//Tmp& refT = tmp;
	//cout << refT.getCounter();
	//Tmp* pT = &tmp;
	//cout << (*pT).getCounter();
	//const char* pStr = tmp.getStr();
	//char* pStr = tmp.getStr();
	//cout << pStr << endl;
	//cout << tmp.getStr() << endl;
	//char* pTmp = tmp.getStr();
	//cout << tmp.getStr() << endl;
	//cout << pTmp << endl;
	//const char* a = "junho";
	//char* a = "junho";
	//cout << a << endl;
	//vector<int> v1{ 1,2,3 };*/
	//const array<int, 3> arr{ 2,2,2 };
	//printVector(v1);
	//printArray(arr);
	//array<array<int, 2>, 3> arr{ {1,1,1,1,1,1} };
	//printmatrixArray(arr);
	//void* p = nullptr;
	//int a = 5;
	//p = &a;
	//cout << *(static_cast<int*>(p)) << endl;
	//char destination[50] = "juho a";
	//char source[50] = "juho kim ho";
	//strcat_s(destination,sizeof(destination), source);
	//strncat_s(destination,sizeof(destination),source, 4);
	//strcpy_s(destination, source);
	//strcpy_s(destination, sizeof(destination), source);
	//strncpy_s(destination, source, 4);
	//strncpy_s(destination, sizeof(destination), source, 5);
	//strcpy_s(destination, sizeof(destination), source); //junho kim ho
	//strncpy_s(destination, sizeof(destination), source, 6); //junho k
	//strcat_s(destination,sizeof(destination), source);
	//strncat_s(destination, sizeof(destination), source, 6); //hijunho k

	//cout << destination << endl;
	

}