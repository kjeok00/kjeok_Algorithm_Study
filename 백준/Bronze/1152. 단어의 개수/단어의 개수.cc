#include <iostream>
#include <string>

int main()
{
	std::string str;

	getline(std::cin, str);

	if (str.empty())
	{
		std::cout << 0 << std::endl;
		return 0;
	}

	int num = 0;
	bool inWord = false;

	for (char c : str)
	{
		if (c == ' ')
			inWord = false;
		else if (!inWord)
		{
			inWord = true;
			num++;
		}
	}

	std::cout << num << std::endl;

	return 0;
}