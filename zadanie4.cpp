#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{

	srand(time(NULL));


	int tab[10], min=73;
	for (int i = 0; i < 10; i += 2)
	{
		tab[i] = rand()%74-23;
		if (min > tab[i])
			min = tab[i];
	}

	cout << min<< " ";
	return 0;
}
