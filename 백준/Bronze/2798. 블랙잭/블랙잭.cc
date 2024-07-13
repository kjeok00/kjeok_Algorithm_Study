#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N, M;  // 카드 개수, 최대 값
    cin >> N >> M;

    vector<int> cardNum(N);

    for (int i = 0; i < N; i++)
    {
        cin >> cardNum[i];
    }

    // 벡터를 오름차순으로 정렬
    sort(cardNum.begin(), cardNum.end());

    int result = 0;

    // 가능한 모든 카드 조합을 검사
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                int sum = cardNum[i] + cardNum[j] + cardNum[k];
                if (sum <= M) {
                    result = max(result, sum);
                }
            }
        }
    }

    cout << result << endl;

    return 0;
}
