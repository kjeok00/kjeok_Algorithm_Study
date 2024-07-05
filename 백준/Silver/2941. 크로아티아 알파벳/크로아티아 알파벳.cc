#include <iostream>
#include <string>

int main()
{
	std::string inWord;	//단어 입력
	std::cin >> inWord;

	int n = inWord.size();	//입력단어 개수
	int num = n;	//총단어 개수 result

	for (int i = 0; i < n; i++)
	{
		switch (inWord[i])
		{
			case '-' :
				if (i != 0 && (inWord[i-1] == 'd' || inWord[i-1] == 'c'))
					num--;	//c-, d-
				break;
			case 'j' :
				if (i != 0 && (inWord[i - 1] == 'l' || inWord[i - 1] == 'n'))
					num--;	//lj, nj
				break;
			case '=' :
				if (i >= 2 && (inWord[i - 2] == 'd' && inWord[i - 1] == 'z'))
					num -= 2;	//dz=
				else if (i != 0 && (inWord[i - 1] == 'c' || inWord[i - 1] == 's' || inWord[i - 1] == 'z'))
					num--;	//c=, s=, z=
				break;
			default:
				break;
		}
	}
	
	std::cout << num << std::endl;

	return 0;
}