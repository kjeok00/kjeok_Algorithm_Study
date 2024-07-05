#include <iostream>
using namespace std;

int main()
{
	int t;	//테스트 케이스
	string result;

	cin >> t;

	for (int i = 0; i < t; i++)
	{

		string S;	//첫 문자
		int r;	//반복 횟수

		cin >> r >> S;

		string P;	//결과 문자

		for (int j = 0; j < S.length(); j++)
		{
			for (int k = 0; k < r; k++)
			{
				P += S[j];
			}
		}
		cout << P << endl;
	}

	return 0;
}