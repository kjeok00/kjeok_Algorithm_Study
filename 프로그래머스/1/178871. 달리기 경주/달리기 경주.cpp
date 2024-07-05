#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;

    unordered_map<string, int> playerMap;

    // playerMap = players
    for (int i = 0; i < players.size(); i++)
        playerMap[players[i]] = i;

    for (int i = 0; i < callings.size(); i++)
    {
        int rank = playerMap[callings[i]]; //추월전 등 수
        
        if (rank > 0)
        {
            swap(players[rank], players[rank - 1]); //앞사람과 등수 교환
            
            //playerMap 업데이트
            playerMap[callings[i]] = rank - 1;
            playerMap[players[rank]] = rank;
        }
    }

    answer = players;

    return answer;
}