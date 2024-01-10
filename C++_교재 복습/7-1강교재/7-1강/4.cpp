#include <iostream>
using namespace std;
class Student {
private:
	int _id;
	void makeID()
	{
		_id += 12220000;
	}
public:
	void setID(int id)
	{
		if (id > 0)
			_id = id;
		makeID();
	}
	int getID() const
	{
		return _id;
	}
};

int main(void)
{
	Student s1;

	s1.setID(1234);
	cout << s1.getID() << endl;
	return 0;
}