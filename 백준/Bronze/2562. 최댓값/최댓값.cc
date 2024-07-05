#include <iostream>
using namespace std;

int main()
{
	int arr[9];
	int num;
	int max;
	int seq = 1;

	for (int i = 0; i < 9; i++)
	{
		cin >> num;
		arr[i] = num;
	}

	max = arr[0];

	for (int j = 0; j < 9; j++)
	{
		if (arr[j] > max)
		{
			max = arr[j];
			seq = j + 1;
		}
	}

	cout << max << endl;
	cout << seq << endl;

	return 0;
}