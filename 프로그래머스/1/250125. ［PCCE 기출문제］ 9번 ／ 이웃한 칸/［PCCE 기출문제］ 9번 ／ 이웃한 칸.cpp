#include <string>
#include <vector>

using namespace std;

// board[h][w]
int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;

    int n = board.size();
    int count = 0;
    
    vector<int> dh;
    vector<int> dw;

    dh.push_back(0);
    dh.push_back(1);
    dh.push_back(-1);
    dh.push_back(0);

    dw.push_back(1);
    dw.push_back(0);
    dw.push_back(0);
    dw.push_back(-1);

    for (int i = 0; i <= 3; i++)
    {
        int h_check = h + dh[i];
        int w_check = w + dw[i];

        if ((h_check >= 0 && h_check < n) && (w_check >= 0 && w_check < n))
        {
            if (board[h][w] == board[h_check][w_check])
                count += 1;
        }
    }

    answer = count;

    return answer;
}