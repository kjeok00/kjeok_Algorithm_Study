#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	int maxNum = max({ n1, n2, n3 });
	int leftNum = n1 + n2 + n3 - maxNum;

	while (true)
	{
		if (maxNum < leftNum)
		{
			cout << maxNum + leftNum;
			break;
		}
		else
			maxNum--;
	}

	return 0;
}