#include <iostream>

using namespace std;

int main() {
	// Введіть початкову ціну першого товару
	float price1;
	cout << "Enter the initial price of the first item: ";
	cin >> price1;

	// Введіть початкову ціну другого товару
	float price2;
	cout << "Enter the initial price of the second item: ";
	cin >> price2;

	// Введіть процентний приріст цін
	float p;
	cout << "Enter the percentage increase in prices: ";
	cin >> p;

	// Розрахуйте нові ціни
	float new_price1 = price1 * (1 + p / 100);
	float new_price2 = price2 * (1 + p / 100);

	// Виведіть старі та нові ціни
	cout << "Old price of item 1: " << price1 << endl;
	cout << "New price of item 1: " << new_price1 << endl;
	cout << "Old price of item 2: " << price2 << endl;
	cout << "New price of item 2: " << new_price2 << endl;

	return 0;
}