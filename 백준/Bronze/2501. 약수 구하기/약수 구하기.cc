#include <iostream>
#include <vector>

int main()
{
	int n, k;	//숫자, 번호
	std::cin >> n >> k;
	
	std::vector<int> num;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
			num.push_back(i);
	}

	std::cout << num[k - 1] << std::endl;

	return 0;
}