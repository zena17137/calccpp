#include <iostream>

using namespace std;

int main () {

	cout << "Введите первое число: ";
	int a;
	cin >> a;

	cout << "Введите второе число: ";
	int b;
	cin >> b;

	cout << "Введите операцию: ";
	char operation;
	cin >> operation;

	switch (operation) {
	case '+':
		cout << a + b;
		break;
	case '-':
		cout << a - b;
		break;
	case '*':
		cout << a * b;
		break;
	case '/':
		cout << a / b;
		break;
	}

	return 0;
}
