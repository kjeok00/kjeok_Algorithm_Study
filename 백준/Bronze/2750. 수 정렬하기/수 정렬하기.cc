#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> arr;

	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		arr.push_back(num);
	}

	sort(arr.begin(), arr.end());

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}