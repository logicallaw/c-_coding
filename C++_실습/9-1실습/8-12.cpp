#include <iostream>
using namespace std;
class TicTacToe {
private:
	static const int BOARD_SIZE = 3;
	char board[BOARD_SIZE][BOARD_SIZE];
	int numMoves;
public:
	TicTacToe();
	void printBoard() const;
	bool makeMove(int row, int col, char piece);
	bool checkWin(char piece);
	bool checkDraw();
	
};
TicTacToe::TicTacToe() {
	for (int i{ 0 }; i < BOARD_SIZE; i++)
		for (int j{ 0 }; j < BOARD_SIZE; j++)
			board[i][j] = '-';
	numMoves = 0;
}

void TicTacToe::printBoard() const {
	cout << "���� ���� ����:" << endl;
	for (int i{ 0 }; i < BOARD_SIZE; i++)
	{
		for (int j{ 0 }; j < BOARD_SIZE; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

//1�� ���� ����. 0�� ���� ����
bool TicTacToe::makeMove(int row, int col, char piece) {
	if (piece == 'X')
	{
		if (board[row][col] == '-')
		{
			board[row][col] = 'X';
			numMoves++;
			if (checkWin('X'))
			{
				cout << "���� ����!" << endl;
				cout << "�÷��̾� 1�� �¸��Ͽ����ϴ�." << endl;
				return 1;
			}
		}
		else if (board[row][col] == 'O')
		{
			cout << "�߸� �Է��Ͽ����ϴ�." << endl;
			return 0;
		}
	}
	else if (piece == 'O')
	{
		if (board[row][col] == '-')
		{
			board[row][col] = 'O';
			numMoves++;
			if (checkWin(piece))
			{
				cout << "���� ����!" << endl;
				cout << "�÷��̾� 2�� �¸��Ͽ����ϴ�." << endl;
				return 1;
			}
		}
		else
		{
			cout << "�߸� �Է��Ͽ����ϴ�." << endl;
		}
	}
}

bool TicTacToe::checkWin(char piece) {
	int sum1 = 0, sum2 = 0, sum3 = 0;
	for (int i{ 0 }; i < BOARD_SIZE; i++)
	{
		for (int j{ 0 }; j < BOARD_SIZE; j++)
		{
			if (board[i][j] == piece)
			{
				sum1++;
			}
			if (board[j][i] == piece)
			{
				sum2++;
			}
		}
		if (sum1 == 3 || sum2 == 3)
		{
			sum1 = 0;
			sum2 = 0;
			return 1;
		}
		if (board[i][i] == piece)
		{
			sum3++;
		}
		if (sum3 == 3)
		{
			sum3 = 0;
			return 1;
		}
	}
	return 0;
}
bool TicTacToe::checkDraw() {
	if (numMoves == 9) return 1;
	else return 0;
}
int main(void) {
	TicTacToe game;
	cout << "ƽ���� ������ �����մϴ�." << endl;
	game.printBoard();
	bool boolA = 0;
	while (!game.checkDraw()) {
		cout << "X �÷��̾� �����Դϴ�." << endl;
		int row, col;
		cout << "�� �Է�(0~2): ";
		cin >> row;
		cout << "�� �Է�(0~2): ";
		cin >> col;
		if (game.makeMove(row, col, 'X')) //1�� ��������
		{
			boolA = 1;
			break;
		}
		//0�� ��������
		game.printBoard();
		
		cout << "O �÷��̾� �����Դϴ�." << endl;
		cout << "�� �Է�(0~2): ";
		cin >> row;
		cout << "�� �Է�(0~2): ";
		cin >> col;
		if (game.makeMove(row, col, 'O'))
		{
			boolA = 1;
			break;
		}
		game.printBoard();
	}
	if (game.checkDraw())
	{
		cout << "���º��Դϴ�.";
	}
	return 0;
}