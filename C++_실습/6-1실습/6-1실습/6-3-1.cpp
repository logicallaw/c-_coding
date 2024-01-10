#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>
using namespace std;
int rollDice();
int main(void)
{
	srand(time(0));
	int myPoint = 0;
	string status;
	int sumOfDice = rollDice();

	switch (sumOfDice) {
	case 7:
	case 11:
		status = "win";
		break;
	case 2:
	case 3:
	case 12:
		status = "lose";
		break;
	default:
		status = "continue";
		myPoint = sumOfDice;
		cout << "\nPoint is " << myPoint << endl;
		break;
	}

	while (status == "continue") {
		sumOfDice = rollDice();
		if (sumOfDice == myPoint)
		{
			status = "win";
		}
		else if (sumOfDice == 7)
		{
			status = "lose";
		}
	}
	if (status == "win")
	{
		cout << "\nPlayer wins" << endl;
	}
	else
	{
		cout << "\nPlayer loses" << endl;
	}
}

int rollDice()
{
	int die1 = 1 + rand() % 6;
	int die2 = 1 + rand() % 6;
	int sum = die1 + die2;

	cout << "Player rolled " << die1 << " + " << die2 << " = " << sum << endl;
	return sum;
}