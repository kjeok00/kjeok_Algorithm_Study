#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<int> inNum(5);
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> inNum[i];
		sum += inNum[i];
	}

	int aver = sum / 5;
	sort(inNum.begin(), inNum.end());
	int mid = inNum[2];

	cout << aver << endl;
	cout << mid << endl;

	return 0;
}