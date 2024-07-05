#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	int rect[100][100] = { 0 };

	for (int i = 0; i < num; i++)
	{
		int x, y;
		std::cin >> x >> y;

		for (int dx = 0; dx < 10; dx++)
		{
			for (int dy = 0; dy < 10; dy++)
			{
				rect[y + dy][x + dx] = 1;
			}
		}
	}

	int result = 0;

	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (rect[j][i] == 1)
				result++;
		}
	}

	std::cout << result << std::endl;
	return 0;
}