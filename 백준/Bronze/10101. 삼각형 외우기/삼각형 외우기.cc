#include <iostream>

int main()
{
	int n1, n2, n3;
	std::cin >> n1 >> n2 >> n3;
	
	int sum = n1 + n2 + n3;

	if (sum != 180)
		std::cout << "Error";
	else if (n1 == 60 && n2 == 60 && n3 == 60)
		std::cout << "Equilateral";
	else if (n1 == n2 || n1 == n3 || n2 == n3)
		std::cout << "Isosceles";
	else
		std::cout << "Scalene";

	return 0;
}