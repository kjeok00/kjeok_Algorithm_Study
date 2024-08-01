#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> haveNum(n);
    for (int i = 0; i < n; i++) {
        cin >> haveNum[i];
    }

    int m;
    cin >> m;
    vector<int> givenNum(m);
    for (int i = 0; i < m; i++) {
        cin >> givenNum[i];
    }

    // haveNum 벡터를 정렬
    sort(haveNum.begin(), haveNum.end());

    vector<int> resultNum(m, 0);

    // givenNum의 각 요소가 haveNum에 있는지 이진 탐색
    for (int i = 0; i < m; i++) {
        if (binary_search(haveNum.begin(), haveNum.end(), givenNum[i])) {
            resultNum[i] = 1;
        }
    }

    // 결과 출력
    for (int i = 0; i < m; i++) {
        cout << resultNum[i] << " ";
    }
    cout << endl;

    return 0;
}
