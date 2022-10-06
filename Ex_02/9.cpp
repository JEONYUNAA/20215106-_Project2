#include <iostream>

using namespace std;


int main() {

	srand(time(NULL));

	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int dice3 = dice1 + dice2;


	cout << "사용자의 주사위: " << dice1 << '+' << dice2 << '=' << dice3 << endl;

	switch (dice3)
	{
	case 7:
	case 11:
		cout << "사용자가 이겼습니다." << endl;
		break;
	case 2:
	case 3:
	case 12:
		cout << "사용자가 졌습니다." << endl;
		break;
	default:
		cout << "비겼습니다." << endl;

	}

	return 0;
}


//p. 162 9번 문제