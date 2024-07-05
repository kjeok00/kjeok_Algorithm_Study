#include <iostream>
using namespace std;

int main()
{
	int dice[3];
	int price;

	cin >> dice[0] >> dice[1] >> dice[2];
	if (dice[0] == dice[1] && dice[1] == dice[2])
		price = 10000 + dice[0] * 1000;
	else if (dice[0] == dice[1] || dice[0] == dice[2])
		price = 1000 + dice[0] * 100;
	else if (dice[1] == dice[2])
		price = 1000 + dice[1] * 100;
	else
	{
		int maxDice = max(max(dice[0], dice[1]), dice[2]);
		price = maxDice * 100;
	}

	std::cout << price << std::endl;

	return 0;
}