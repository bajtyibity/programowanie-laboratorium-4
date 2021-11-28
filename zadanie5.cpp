#include <iostream>

using namespace std;

int main()
{

	int i;
	int tab[10];

	cout << "podaj 1 liczbe :";
	cin >> i;
	tab[0] = i;

	cout << "podaj 2 liczbe :";
	cin >> i;
	tab[1] = i;

	cout << endl;

	for (int i = 2; i < 10; i++)
		tab[i] = tab[i - 1] + tab[i - 2];

	for (int i = 0; i < 10; i++)
		cout << "wyraz ciongu nr" << i << ": " << tab[i] << endl;

	return 0;
}