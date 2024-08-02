#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // std::gcd

using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int find_gcd(const vector<int>& diffs) {
    int result = diffs[0];
    for (int i = 1; i < diffs.size(); ++i) {
        result = gcd(result, diffs[i]);
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    vector<int> positions(n);
    for (int i = 0; i < n; ++i) {
        cin >> positions[i];
    }

    vector<int> diffs(n - 1);
    for (int i = 1; i < n; ++i) {
        diffs[i - 1] = positions[i] - positions[i - 1];
    }

    int interval_gcd = find_gcd(diffs);

    int additional_trees = 0;
    for (int diff : diffs) {
        additional_trees += (diff / interval_gcd) - 1;
    }

    cout << additional_trees << endl;

    return 0;
}
