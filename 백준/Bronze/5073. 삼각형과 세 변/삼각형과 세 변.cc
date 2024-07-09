#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    while (true) {
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;

        // 입력이 "0 0 0"인 경우 루프 종료
        if (a1 == 0 && a2 == 0 && a3 == 0) {
            break;
        }

        // 세 변의 합 계산
        int sum = a1 + a2 + a3;

        // 가장 긴 변 찾기
        int max_side = max({a1, a2, a3});

        // 삼각형이 유효한지 확인
        if (max_side >= sum - max_side) {
            cout << "Invalid" << endl;
        } else if (a1 == a2 && a2 == a3) {
            cout << "Equilateral" << endl;
        } else if (a1 == a2 || a2 == a3 || a1 == a3) {
            cout << "Isosceles" << endl;
        } else {
            cout << "Scalene" << endl;
        }
    }

    return 0;
}
