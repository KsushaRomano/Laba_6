using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int K;
	cout << "Введите день: ";
	cin >> K;
	while (K > 6) { K = K - 7; };
	cout << "Номер дня недели: " << K;
}