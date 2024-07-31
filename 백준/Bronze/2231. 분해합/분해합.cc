#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int result= 0;

	for (int i = 1; i < n; i++)
	{
		int sum = 0;
		int temp = i;

		while (true)
		{
			sum += temp % 10;
			temp /= 10;
			if (temp < 1)
				break;
		}
		sum += i;

		if (sum == n)
		{
			result = i;
			break;
		}
	}
	
	cout << result << endl;

	return 0;
}