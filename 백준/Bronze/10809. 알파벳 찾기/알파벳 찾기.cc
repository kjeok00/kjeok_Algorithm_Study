#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;

	cin >> S;
	
	int arr[26];

	for (int i = 0; i < S.length(); i++)
	{
		for (int j = i+1; j < S.length(); j++)
		{
			if (S[i] == S[j])
				S[j] = NULL;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		arr[i] = -1;
	}

	for (int j = 0; j < S.length(); j++)
	{
		if (S[j] != NULL)
		{
			int num = int(S[j]) - int('a');
			arr[num] = j;
		}
	}

	for (int k = 0; k < 26; k++)
	{
		cout << arr[k] << " ";
	}
	
	return 0;
}