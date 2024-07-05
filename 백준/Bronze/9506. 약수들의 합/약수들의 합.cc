#include <iostream>
#include <vector>

int main()
{
	std::vector<int> inNum;
	int n;

	while (std::cin >> n && n != -1)
	{
		inNum.push_back(n);
	}

	std::vector<std::vector<int>> divisor(inNum.size());

	for (int i = 0; i < inNum.size(); i++)
	{
		for (int j = 1; j < inNum[i]; j++)
		{
			if (inNum[i] % j == 0)
				divisor[i].push_back(j);
		}
	}

	for (int i = 0; i < inNum.size(); i++)
	{
		int result = 0;

		for (int k = 0; k < divisor[i].size(); k++)
		{
			result += divisor[i][k];
		}

		if (result == inNum[i])
		{
			std::cout << inNum[i] << " = ";
			for (int j = 0; j < divisor[i].size(); j++)
			{
				std::cout << divisor[i][j];
				if (j < divisor[i].size() - 1)
					std::cout << " + ";
			}
			std::cout << "\n";
		}
		else
		{
			std::cout << inNum[i]
				<< " is NOT perfect." << std::endl;
		}
		
	}

	return 0;
}