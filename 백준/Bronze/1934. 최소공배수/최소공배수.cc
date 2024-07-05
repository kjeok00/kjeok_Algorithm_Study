#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> v1;
	vector<int> v2;

	for (int i = 0; i < n; i++)
	{
		int n1, n2;
		cin >> n1 >> n2;

		v1.push_back(n1);
		v2.push_back(n2);
	}
	 
	for (int i = 0; i < n; i++)
	{
		int temp = 0;
		int maxNum = max(v1[i], v2[i]);
		int minNum = min(v1[i], v2[i]);
	
		while (minNum != 0)
		{
			temp = maxNum % minNum;
			maxNum = minNum;
			minNum = temp;
		}

		cout << v1[i] * v2[i] / maxNum << endl;
	}

	return 0;
}