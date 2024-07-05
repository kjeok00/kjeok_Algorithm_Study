#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;

	vector<int> arrX;
	vector<int> arrY;

	std::cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		int n1, n2;

		cin >> n1 >> n2;

		arrX.push_back(n1);
		arrY.push_back(n2);
	}

	int maxX = arrX[0];
	int minX = maxX;
	int minY = arrY[0];
	int maxY = minY;

	for (int i = 0; i < n; i++)
	{
		if (maxX < arrX[i])
			maxX = arrX[i];

		if (minX > arrX[i])
			minX = arrX[i];

		if (maxY < arrY[i])
			maxY = arrY[i];

		if (minY > arrY[i])
			minY = arrY[i];
	}

	std::cout << (maxX - minX) * (maxY - minY);

	return 0;
}