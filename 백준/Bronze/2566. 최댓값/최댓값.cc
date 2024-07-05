#include <iostream>

int main()
{
	int arr[9][9] = { 0 };
	int loc[2] = { 0, 0 }; //행, 열
	int max = 0;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			std::cin >> arr[i][j];

			if (max <= arr[i][j])
			{
				max = arr[i][j];
				loc[0] = i;
				loc[1] = j;
			}
		}
	}

	std::cout << max << std::endl;
	std::cout << loc[0]+ 1 << " " << loc[1] + 1 << std::endl;

	return 0;
}