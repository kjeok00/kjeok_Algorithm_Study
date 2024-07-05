#include <iostream>
#include <string>
#include <vector>

int main()
{
	int n;
	std::cin >> n;	//받을 단어 개수
	std::vector<std::string> inWords;

	for (int i = 0; i < n; i++)
	{
		std::string str;
		std::cin >> str;
		inWords.push_back(str);
	}

	int result = inWords.size();

	for (int i = 0; i < inWords.size(); i++)	//모든 입력 단어
	{
		std::vector<char> useWords(256, 0);	//사용된 단어
		bool isContinue = true;

		for (int j = 0; j < inWords[i].size(); j++)	//각 단어의 문자
		{
			if (j != 0 && useWords[inWords[i][j]] != 0 && inWords[i][j] != inWords[i][j - 1])
				//j는 0이 아니고, 사용된적 있고, 앞의 숫자와 다르다면 그룹 단어가 아니다.
				isContinue = false;

			useWords[inWords[i][j]]++;

		}

		if (isContinue == false)
			--result;
	}

	std::cout << result << std::endl;
	
	return 0;
}