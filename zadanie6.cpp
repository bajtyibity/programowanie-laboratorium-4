#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	int tab[20];
	tab[0] = 1;
	tab[1] = 2;
	tab[2] = 3;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 6;
	tab[6] = 7;
	tab[7] = 8;
	tab[8] = 9;
	tab[9] = 0;


	for (int i = 0; i < 10; i++)
		tab[i+10] = tab[i];

	for (int i = 0; i < 20; i++)
		cout << "wyraz nr" << i << ": " << tab[i] << endl;

	return 0;
}