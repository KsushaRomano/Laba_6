using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int G, V;
	cout << "Введите год: ";
	cin >> G;
	if (G % 100 == 0) { V = int(G / 100); 
	cout << "Столетие: " << V;
	}
	else {
		V = int(G / 100) + 1;
		cout << "Столетие: " << V;
	}
}