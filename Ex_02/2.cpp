
#include <iostream>

using namespace std;

inline double calc_volume(double i) {

	return (4.0 / 3.0 * 3.14 * pow(i, 3));
}

int main() {

	double radius;

	cout << "반지름을 입력하시오: ";
	cin >> radius;

	cout << "구의 부피는 " << calc_volume(radius) << endl;

	return 0;
}


//p. 160 2번 문제
