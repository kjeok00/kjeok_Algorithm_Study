#include <iostream>
using namespace std;

int main()
{
	int arr[10] = {};
	int n;
	int num = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> n;
		arr[i] = n % 42;
	}
	
	for (int j = 0; j < 9; j++)
	{
		for (int k = j + 1; k <= 9; k++)
		{
			if (arr[j] == arr[k])
				arr[k] = -1;
		}
	}

	for (int k = 0; k < 10; k++)
	{
		if (arr[k] != -1)
			num++;
	}

	cout << num << endl;

	return 0;
}
