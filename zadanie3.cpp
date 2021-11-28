#include <iostream>

using namespace std;

int main()
{
	int a, tab[10];
	cin >> a;

	for (int i = 0; i < 10; i++)
		tab[9 - i] = a - (5 * i);

	for (int i = 0; i < 10; i++)
		cout << tab[i] << endl;

	return 0;
}
