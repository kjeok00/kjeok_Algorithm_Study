#include <iostream>
#include <vector>
#include <algorithm> // std::sort, std::greater
#include <cstdio>    // scanf, printf

using namespace std;

int main() {
    int n;
    scanf("%d", &n);

    vector<int> numbers(n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    sort(numbers.begin(), numbers.end());

    for (int i = 0; i < n; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}
