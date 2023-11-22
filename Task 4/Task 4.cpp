#include <iostream>
#include <math.h>
#include <Windows.h>


using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double x = 2.5;
	double b;

	cout << "Введіть значення b: ";
	cin >> b;

	double a = b * b * b + log(abs(b));
	double c = a * a + sqrt(b);
	double y = exp(x) + 5.8 * c;

	cout << "Значення функції y=F(x) дорівнює " << y << endl;

	return 0;
}
