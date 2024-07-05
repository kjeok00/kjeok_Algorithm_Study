#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;

	std::vector<int> inNum;
	std::vector<int> result;

	for (int i = 0; i < n; i++)
	{
		int number;
		std::cin >> number;
		inNum.push_back(number);
	}

	for (int i = 0; i < inNum.size(); i++)
	{
		int num = 0;

		for (int j = 1; j <= inNum[i]; j++)
		{
			if (inNum[i] % j == 0)
				num++;
		}

		if (inNum[i] != 1 && num == 2)
			result.push_back(inNum[i]);
	}

	std::cout << result.size();


	return 0;
}