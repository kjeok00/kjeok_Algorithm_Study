#include <iostream>

using namespace std;

int main()
{
	int a1, a0, c, n0;

	cin >> a1 >> a0;
	cin >> c;
	cin >> n0;

	bool result = false;

	// a1*n + a0 <= c * n  (n >= n0일때)
	// n*(a1 -c) + a0 <= 0;
	// a1 <= c

	if (a1 <= c && n0 * (a1 - c) + a0 <= 0)
		result = true;
	else
		result = false;

	cout << int(result) << endl;

	return 0;
}