#include <iostream>

int main() {
    int N;
    std::cin >> N;

    // 윗 부분 출력
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= N - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    // 아랫 부분 출력
    for (int i = N - 1; i >= 1; --i) {
        for (int j = 1; j <= N - i; ++j) {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}
