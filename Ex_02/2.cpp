
#include <iostream>

using namespace std;

inline double calc_volume(double i) {

	return (4.0 / 3.0 * 3.14 * pow(i, 3));
}

int main() {

	double radius;

	cout << "�������� �Է��Ͻÿ�: ";
	cin >> radius;

	cout << "���� ���Ǵ� " << calc_volume(radius) << endl;

	return 0;
}


//p. 160 2�� ����
