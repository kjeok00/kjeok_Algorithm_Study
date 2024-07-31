#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;

	vector<int> scores(n);

	for (int i = 0; i < n; i++)
	{
		cin >> scores[i];
	}

	std::sort(scores.begin(), scores.end(), greater<int>());

	cout << scores[k-1];

	return 0;
}