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
	cout << "현재 보드 상태:" << endl;
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

//1은 게임 종료. 0은 게임 진행
bool TicTacToe::makeMove(int row, int col, char piece) {
	if (piece == 'X')
	{
		if (board[row][col] == '-')
		{
			board[row][col] = 'X';
			numMoves++;
			if (checkWin('X'))
			{
				cout << "게임 종료!" << endl;
				cout << "플레이어 1가 승리하였습니다." << endl;
				return 1;
			}
		}
		else if (board[row][col] == 'O')
		{
			cout << "잘못 입력하였습니다." << endl;
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
				cout << "게임 종료!" << endl;
				cout << "플레이어 2가 승리하였습니다." << endl;
				return 1;
			}
		}
		else
		{
			cout << "잘못 입력하였습니다." << endl;
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
	cout << "틱택토 게임을 시작합니다." << endl;
	game.printBoard();
	bool boolA = 0;
	while (!game.checkDraw()) {
		cout << "X 플레이어 차례입니다." << endl;
		int row, col;
		cout << "행 입력(0~2): ";
		cin >> row;
		cout << "열 입력(0~2): ";
		cin >> col;
		if (game.makeMove(row, col, 'X')) //1은 게임종료
		{
			boolA = 1;
			break;
		}
		//0은 게임진행
		game.printBoard();
		
		cout << "O 플레이어 차례입니다." << endl;
		cout << "행 입력(0~2): ";
		cin >> row;
		cout << "열 입력(0~2): ";
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
		cout << "무승부입니다.";
	}
	return 0;
}