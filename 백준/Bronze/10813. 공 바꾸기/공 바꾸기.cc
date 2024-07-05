#include <iostream>
using namespace std;

int main()
{
	int N, M;
	int i, j;
	int temp = 0;

	cin >> N >> M;

	int* basket = new int[N];

	for (int x = 0; x < N; x++)
		basket[x] = x + 1;

	for (int y = 0; y < M; y++)
	{
		cin >> i >> j;
		temp = basket[i - 1];
		basket[i - 1] = basket[j - 1];
		basket[j - 1] = temp;
	}

	for (int z = 0; z < N; z++)
		cout << basket[z] << " ";

	return 0;

}
