#include <iostream>
using namespace std;

int main()
{
	int N, M;
	int i, j, k;

	cin >> N >> M;

	int* basket = new int[N]();

	for (int z = 0; z < M; z++)
	{
		cin >> i >> j >> k;

		for (int x = i - 1; x < j; x++)
		{
			basket[x] = k;
		}
	}

	for (int c = 0; c < N; c++)
	{
		cout << basket[c] << " ";
	}

	delete[] basket;

	return 0;
}