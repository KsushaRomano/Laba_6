using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int s, S;
	cout << "Введите секунды: ";
	cin >> s;
	if (s < 60) { cout << "С начала последней минуты прошло " << s <<" секунд"; };
	while (s >= 60) {
		s = s - 60;
		S = s;
	}
	cout <<"С начала последней минуты прошло " << S << " секунд";
}