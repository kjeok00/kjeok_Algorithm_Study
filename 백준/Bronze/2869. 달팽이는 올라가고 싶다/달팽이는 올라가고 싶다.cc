#include <iostream>
#include <cmath>

int main()
{
	int a, b, v;	//낮+, 밤-, 나무높이
	std::cin >> a >> b >> v;

	int result = std::ceil((double(v - a) / (a - b))) + 1;

	std::cout << result << std::endl;

	return 0;
}