#include <iostream>
#include <cmath>
#include <algorithm>

int main()
{
	int x1, y1, x2, y2, x3, y3;

	std::cin >> x1 >> y1;
	std::cin >> x2 >> y2;
	std::cin >> x3 >> y3;

	int resultX = 0;

	if (x1 == x2)
		resultX = x3;
	else if (x1 == x3)
		resultX = x2;
	else
		resultX = x1;

	int resultY = 0;

	if (y1 == y2)
		resultY = y3;
	else if (y1 == y3)
		resultY = y2;
	else
		resultY = y1;

	std::cout << resultX << " " << resultY;

	return 0;
}