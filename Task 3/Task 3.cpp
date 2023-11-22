#include <iostream>
#include <math.h>
#include <Windows.h>

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double alpha;
	double z1, z2;

	cout << "Введіть значення альфа: ";
	cin >> alpha;

	z1 = sin(2 * alpha) + sin(5 * alpha) - sin(3 * alpha) * cos(alpha) + 1 - 2 * sin(2 * alpha) * sin(alpha);
	z2 = 2 * sin(alpha);

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	return 0;
}
