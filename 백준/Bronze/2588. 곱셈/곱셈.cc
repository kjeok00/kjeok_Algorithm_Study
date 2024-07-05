#include <iostream>
using namespace std;

int main()
{
	int A, B;
	int n1, n2, n3;
	//B: n3n2n1

	cin >> A;	//472
	cin >> B;	//385

	n3 = B / 100;
	n2 = (B / 10) % 10;
	n1 = B % 10;
	
	cout << A * n1 << endl;
	cout << A * n2 << endl;
	cout << A * n3 << endl;
	cout << A * B << endl;

	return 0;
}