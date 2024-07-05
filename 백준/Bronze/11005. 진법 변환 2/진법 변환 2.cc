#include <iostream>
#include <vector>

std::vector<char> remain;

void Div(int n, int b)
{
	if (n == 0)
	{
		if (remain.empty())
			remain.push_back('0');

		return;
	}

	int quot = n / b;
	int reNum = n % b;

	if (reNum < 10)
		remain.push_back(reNum + '0');
	else
		remain.push_back(reNum - 10 + 'A');

	Div(quot, b);
}

int main()
{
	int n, b;	//숫자, 진법
	std::cin >> n >> b;

	Div(n, b);

	for (int i = 0; i < remain.size(); i++)
	{
		std::cout << remain[remain.size() - 1 - i];
	}
	return 0;
}