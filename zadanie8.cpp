#include <iostream>

using namespace std;

int main()
{
	int macierz1[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	int macierz2[3][3] =
	{
		{1,2,3},
		{4,5,6},
		{7,8,9}
	};

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			macierz1[i][j] += macierz2[i][j];
		}
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << macierz1[i][j] << " ";
		}
		cout << endl;
	}
	return 0;

}

