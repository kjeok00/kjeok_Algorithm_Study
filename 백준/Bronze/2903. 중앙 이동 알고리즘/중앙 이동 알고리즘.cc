#include <iostream>

int Expo(int num, int n)	//숫자, 횟수
{
	int result = (num * 2);

	if (n-1 == 0)
		return (result + 1) * (result + 1);
	else
	{
		return Expo(result, n-1);
	}
}

int main()
{
	int n;	//개수
	std::cin >> n;

	//한 변의 개수 n[i] = n[i-1]*2
	//점의 개수= (n[i]+1)^2

	int result = Expo(1, n);

	std::cout << result << std::endl;

	return 0;
}