#include <iostream>
#include <vector>
#include <string>

int CtoI(char c)
{
	if (c == 'A' || c == 'B' || c == 'C')
		return 3;
	else if (c == 'D' || c == 'E' || c == 'F')
		return 4;
	else if (c == 'G' || c == 'H' || c == 'I')
		return 5;
	else if (c == 'J' || c == 'K' || c == 'L')
		return 6;
	else if (c == 'M' || c == 'N' || c == 'O')
		return 7;
	else if (c == 'P' || c == 'Q' || c == 'R' || c == 'S')
		return 8;
	else if (c == 'T' || c == 'U' || c == 'V')
		return 9;
	else if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
		return 10;
}

int main()
{
	std::string str;

	std::cin >> str;
		
	int result = 0;

	for (int i = 0; i < str.length(); i++)
	{
		result += CtoI(str[i]);
	}

	std::cout << result << std::endl;

	return 0;
}