#include <iostream>
#include <string>

int main()
{
	std::string inNum1;
	std::string inNum2;

	std::cin >> inNum1 >> inNum2;

	int n1 = 0;
	int n2 = 0;

	while (n1 <= inNum1.length()/2)
	{
		char c = ' ';

		c = inNum1[n1];
		inNum1[n1] = inNum1[inNum1.length() - n1-1];
		inNum1[inNum1.length() - n1-1] = c;

		n1++;
	}

	while (n2 <= inNum2.length()/2)
	{
		char c = ' ';

		c = inNum2[n2];
		inNum2[n2] = inNum2[inNum2.length() - n2-1];
		inNum2[inNum2.length() - n2-1] = c;

		n2++;
	}

	int num1, num2;

	num1 = std::stoi(inNum1);
	num2 = std::stoi(inNum2);

	if (num1 >= num2)
		std::cout << num1 << std::endl;
	else
		std::cout << num2 << std::endl;

	return 0;

}