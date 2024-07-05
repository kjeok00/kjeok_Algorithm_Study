#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	std::string str;

	std::cin >> str;

	std::string revStr = str;
	std::reverse(revStr.begin(), revStr.end());

	int num;

	if (str == revStr)
		num = 1;
	else
		num = 0;

	std::cout << num;

	return 0;
}