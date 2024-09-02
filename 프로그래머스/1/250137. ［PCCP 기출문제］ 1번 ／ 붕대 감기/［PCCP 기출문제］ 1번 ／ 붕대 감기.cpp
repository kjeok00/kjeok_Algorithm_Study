#include <string>
#include <vector>

using namespace std;

// bandage[시전시간][초당회복량][추가회복량]
// t: 시전시간, x: 초당회복량, y: 추가회복량
int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int answer = 0;
    int maxHealth = health;
    int playerHealth = health;

    
    int time = 1;   //현재 시간
    int attackIndex = 0;
    int healTime = 0;   //시전시간 계산

    while (time <= attacks[attacks.size() - 1][0])
    {
        if (time == attacks[attackIndex][0])    //피격
        {
            playerHealth -= attacks[attackIndex][1];
            attackIndex += 1;
            time += 1;
            healTime = 0;

            if (playerHealth <= 0)
            {
                playerHealth = -1;
                break;
            }
        }
        else // 치료
        {
            healTime += 1;
            time += 1;

            playerHealth += bandage[1]; //초당 회복

            if (healTime == bandage[0])
            {
                playerHealth += bandage[2]; //추가 회복
                healTime = 0;
            }

            if (playerHealth > maxHealth)
                playerHealth = maxHealth;
        }
    }


    answer = playerHealth;

    return answer;  // 모든 공격이 끝난 직후 남은 체력
                    // 몬스터의 공격을 받고 캐릭터의 체력이 0이하면 -1 return
}