#include <iostream>

using namespace std;

int main()
{
	int N;	// 들고갈 무게
	cin >> N;
	//봉지 3 or 5kg
	int resultNum = 0;

	while (true)
	{
		if (N < 0)
		{
			resultNum = -1;
			break;
		}

		if (N % 5 == 0)
		{
			resultNum += N / 5;
			break;
		}
		else
		{
			N -= 3;
			resultNum++;
		}
	}
	
	cout << resultNum << endl;

	return 0;
}