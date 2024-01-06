#include <iostream>
#include <array>
using namespace std;
class Food {
private:
	string name;
	int price;
	int quantity;
public:
	Food();
	Food(string name, int price, int quantity);
	string getName() const;
	int getPrice() const;
	int getQuantity() const;
};
Food::Food() : name{ "noname" }, price{ 0 }, quantity{ 0 } {}
Food::Food(string name, int price, int quantity)
	: name{ name }, price{ price }, quantity{ quantity } {}
string Food::getName() const { return name; }
int Food::getPrice() const { return price; }
int Food::getQuantity() const { return quantity; }

class Menu {
private:
	array<Food, 10> foods;
	int numFoods = 0;
public:
	Menu() = default;
	void addFood(const Food& food);
	void printMenu() const;
	int findFoodIndex(string foodName) const;
	void orderFood(string foodName, int quantity);
};
void Menu::addFood(const Food& food) {
	foods[numFoods++] = food;
}
void Menu::printMenu() const {
	cout << "==== 메뉴 ====" << endl;
	for (int i{ 0 }; i < 10; i++)
	{
		if (foods[i].getName() != "noname")
		{
			cout << i + 1 << ". " << foods[i].getName() << " - " << foods[i].getPrice() << "원\n";
		}
	}
}

int Menu::findFoodIndex(string foodName) const {
	int cnt = 0;
	for (Food food : foods)
	{
		if (food.getName() == foodName)
			return cnt;
		cnt++;
	}
	return -1;

}
void Menu::orderFood(string name, int quantity) {
	int result = findFoodIndex(name);
	if (result == -1)
	{
		cout << "해당 음식이 존재하지 않습니다.";
	}
	else
	{
		if (foods[result].getQuantity() >= quantity)
		{
			cout << name << " " << quantity << "개 주문 완료! ";
			cout << "총 " << quantity * foods[result].getPrice() << "원 결제됩니다.";
		}
		else
		{
			cout << "재고가 부족합니다.";
		}
	}


	//quantity * price
}

int main(void) {
	Menu menu;
	menu.addFood(Food{ "pizza", 15000, 10 });
	menu.addFood(Food{ "buger",8000,20 });
	menu.addFood(Food{ "chicken",18000,5 });
	menu.addFood(Food{ "pasta",10000,15 });

	menu.printMenu();

	string foodName;
	int quantity;
	cout << "\n주문할 음식과 수량을 입력해주세요. (ex. pizza 2)" << endl;
	cin >> foodName >> quantity;

	menu.orderFood(foodName, quantity);

}