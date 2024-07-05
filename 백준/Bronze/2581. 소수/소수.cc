#include <iostream>
#include <vector>
int main()
{
	int m, n;	// m < number < n
	std::cin >> m >> n;

	std::vector<int> result;

	for (int i = m; i <= n; i++)
	{
		int num = 0;

		for (int j = 1; j <= i; j++)
		{
			if (i % j == 0)
				num++;
		}
		if (i != 1 && num == 2)
			result.push_back(i);
	}

	int sum = 0;

	if (!result.empty())
	{
		for (int i = 0; i < result.size(); i++)
			sum += result[i];

		std::cout << sum << std::endl;
		std::cout << result[0] << std::endl;
	}
	else
		std::cout << "-1" << std::endl;
	
	return 0;
}