using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int K, N, k;
	cout << "Введите номер дня недели 1 января: ";
	cin >> N;
	cout << "Введите день: ";
	cin >> K;
	k = (K + N - 2) % 7 + 1;
	cout << "Код дня недели: " << k;
}