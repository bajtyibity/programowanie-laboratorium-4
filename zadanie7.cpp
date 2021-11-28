#include <iostream>

using namespace std;

int main() {
	int a = 0;
	int macierz1[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	for (int i = 0; i < 3; i++)
	{

		a += macierz1[i][i];

	}

	cout << a;

	return 0;
}
