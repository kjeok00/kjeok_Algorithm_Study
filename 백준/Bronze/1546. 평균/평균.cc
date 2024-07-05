#include <iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;

	double* arr = new double[N];
	double M = 0;
	double sum = 0;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];

		if (arr[i] > M)
			M = arr[i];
	
	}

	for (int j = 0; j < N; j++)
		sum += arr[j] / M * 100.0;


	cout << sum / N;

	delete[] arr;
	return 0;
}