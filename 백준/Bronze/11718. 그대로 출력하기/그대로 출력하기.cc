#include <iostream>
#include <string>

int main()
{
	std::string str[100];
	
	int n = 0;

	while (true)
	{
		std::string input;
		std::getline(std::cin, input);

		if (input.empty() || n == 100)
			break;

		str[n] = input;
		n++;
	}

	for (int i = 0; i < n; i++)
	{
		std::cout << str[i] << std::endl;
	}

	return 0;
}