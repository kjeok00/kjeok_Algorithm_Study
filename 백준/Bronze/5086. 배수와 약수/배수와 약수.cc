#include <iostream>

int main()
{
	int n1, n2;

	while (true)
	{
		std::cin >> n1 >> n2;

		if (n1 == 0 && n2 == 0)
			return false;


		if (n1 > n2)
		{
			if (n1 % n2 == 0)
				std::cout << "multiple" << std::endl;
			else
				std::cout << "neither" << std::endl;
		}
		else
		{
			if (n2 % n1 == 0)
				std::cout << "factor" << std::endl;
			else
				std::cout << "neither" << std::endl;
		}

	}
	return 0;
}