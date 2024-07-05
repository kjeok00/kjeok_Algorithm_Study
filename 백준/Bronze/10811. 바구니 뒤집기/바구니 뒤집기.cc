#include <iostream>
using namespace std;

int main()
{
	int N, M;
	int i, j;

	cin >> N >> M;

	int* arr = new int[N];


	for (int k = 0; k < N; k++)
	{
		arr[k] = k + 1;
	}

	for (int l = 0; l < M; l++)
	{
		int temp = 0;
		cin >> i >> j;

		i -= 1;
		j -= 1;

		while (i < j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;

			i++;
			j--;
		}
	}

	for (int k = 0; k < N; k++)
	{
		cout << arr[k] << " ";
	}

	delete[] arr;
	return 0;
}