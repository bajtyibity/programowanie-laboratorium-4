#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{


	srand(time(NULL));


	int tab[10], x = 3;
	for (int i = 0; i < 10; i += 1)
	{
		tab[i] = x;
		x += 3;
		cout << tab[i] << " ";
	}
	return 0;
}

