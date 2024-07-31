#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	/*
		delta = a b
				d e
	*/

	int delta = a * e - b * d;
	int deltaX = c * e - b * f;
	int deltaY = a * f - c * d;

	int x = deltaX / delta;
	int y = deltaY / delta;

	cout << x << " " << y << endl;

	return 0;
}