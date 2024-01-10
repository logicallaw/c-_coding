#include <iostream>

using namespace std;
class Student {
private:
	int _id;
public:
	string _name;

	void setID(int id)
	{
		if (id > 0)
			_id = id;
	}
	int getID() const
	{
		return _id;
	}
};

int main(void)
{
	Student s1;
	s1.setID(1);
	s1._name = "dlwlrma";

	cout << s1.getID() << endl;
	cout << s1._name << endl;

	return 0;
}