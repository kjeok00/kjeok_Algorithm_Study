#include <iostream>
using namespace std;

int main()
{
	bool arr[31] = { false };
	int n;

	for (int i = 0; i < 28; i++)
	{
		cin >> n;
		arr[n] = true;
	}

	for (int j = 1; j <= 30; j++)
	{
		if (arr[j] == false)
			cout << j << endl;
	}

	return 0;
}
