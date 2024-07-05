#include <iostream>
using namespace std;

int main()
{
	int N, v;
	int num;
	int n = 0;

	cin >> N;

	int* temp = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> num;
		temp[i] = num;
	}

	cin >> v;

	for (int j = 0; j < N; j++)
	{
		if (v == temp[j])
			n++;
	}

	cout << n << endl;

	delete[] temp;

	return 0;
}