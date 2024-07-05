#include <iostream>
#include <vector>

using namespace std;

const int quar = 25;
const int dime = 10;
const int nick = 5;
const int penn = 1;

vector<int> Div(int n)
{
	vector<int> divVec(0);

	divVec.push_back(n / quar);
	n %= quar;

	divVec.push_back(n / dime);
	n %= dime;

	divVec.push_back(n / nick);
	n %= nick;

	divVec.push_back(n / penn);

	return divVec;
};


int main()
{
	int t;
	std::cin >> t;

	vector<int> result(4,0);

	for (int i = 0; i < t; i++)
	{
		int c;
		std::cin >> c;
		vector<int>result = Div(c);
		cout << result[0] << " "
			<< result[1] << " "
			<< result[2] << " "
			<< result[3] << endl;
	}
	

	return 0;
}