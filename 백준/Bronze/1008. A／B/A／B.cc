#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double A;
    double B;
    double result;

    cin >> A >> B;
    if ((0 < A && A < 10) && (0 < B && B < 10 && B != 0))
    {
        result = A / B;
        cout << fixed << setprecision(9) << result << endl;
    }
    else
        cout << "invalid input" << endl;

    return 0;
}