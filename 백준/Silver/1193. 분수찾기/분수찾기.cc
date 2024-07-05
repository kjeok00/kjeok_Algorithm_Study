#include <iostream>

int Sum(int n)
{
	return n * (n + 1) / 2;
}

int FindNum(int num, int n = 1)	//찾을 숫자, 횟수
{
	if (Sum(n) >= num)
		return n;
	else
		return FindNum(num, n+1);
};	//몇번째 라인인가

int main()
{
	int x;
	std::cin >> x;

	int arrNum = x - Sum(FindNum(x)-1);


	int numerator = arrNum;	//분자
	int denominator = FindNum(x) - arrNum + 1;	//분모

	if(FindNum(x) % 2 == 0)
		std::cout << numerator << "/" << denominator << std::endl;
	else
		std::cout << denominator << "/" << numerator << std::endl;

	return 0;
}