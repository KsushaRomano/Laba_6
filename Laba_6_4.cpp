using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int A, B, C, k, n;
	cout << "Введите значение А: ";
	cin >> A;
	cout << "Введите значение B: ";
	cin >> B;
	cout << "Введите значение C: ";
	cin >> C;
	k = int((A * B) / (C * C));
	n = A * B - k * C * C;
	cout << "Количество квадратов на прямоугольнике: " << k << endl;
	cout << "Незанятая площадь: " << n;
}