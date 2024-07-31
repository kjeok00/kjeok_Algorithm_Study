#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); // 입출력 동기화 비활성화
    cin.tie(NULL);               // 입출력 묶음 비활성화

    int n;
    cin >> n;

    vector<vector<int>> map(n, vector<int>(2));
    for (int i = 0; i < n; i++)
    {
        cin >> map[i][0] >> map[i][1];
    }

    sort(map.begin(), map.end());

    for (int i = 0; i < n; i++)
    {
        cout << map[i][0] << " " << map[i][1] << '\n';
    }

    return 0;
}
