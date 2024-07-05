#include <iostream>
#include <string>

int main()
{
	std::string arr[5];

	int max = 0;

	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
		if (arr[i].size() > max)
			max = arr[i].size();
	}

	for (int i = 0; i < 5; i++)
	{
		arr[i].resize(max, ' ');
	}

	std::string* result = new std::string[max];

	for (int i = 0; i < max; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[j][i] != ' ')
			{
				result[i] += arr[j][i];
			}
		}
	}

	for (int i = 0; i < max; i++)
	{
		std::cout << result[i];
	}

	delete[] result;

	return 0;
}