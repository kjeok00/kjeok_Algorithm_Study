#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int T;
	int a, b;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a << " + " << b << " = " << a + b << '\n';
	}


	return 0;
}