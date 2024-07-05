#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
	int x, y, w, h;
	std::cin >> x >> y >> w >> h;

	int result = std::min({ x, y, w-x, h-y });

	std::cout << result;

	return 0;
}