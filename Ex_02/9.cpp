#include <iostream>

using namespace std;


int main() {

	srand(time(NULL));

	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int dice3 = dice1 + dice2;


	cout << "������� �ֻ���: " << dice1 << '+' << dice2 << '=' << dice3 << endl;

	switch (dice3)
	{
	case 7:
	case 11:
		cout << "����ڰ� �̰���ϴ�." << endl;
		break;
	case 2:
	case 3:
	case 12:
		cout << "����ڰ� �����ϴ�." << endl;
		break;
	default:
		cout << "�����ϴ�." << endl;

	}

	return 0;
}


//p. 162 9�� ����