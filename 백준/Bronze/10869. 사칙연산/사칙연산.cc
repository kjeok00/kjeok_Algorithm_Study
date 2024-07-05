#include <iostream>
using namespace std;

int main()
{
    int A;
    int B;

    cin >> A >> B;

    if ((1 <= A && A <= 10000) && (1 <= B && B <= 10000))
    {
        cout << A + B << endl;
        cout << A - B << endl;
        cout << A * B << endl;
        cout << A / B << endl;
        cout << A % B << endl;
    }
    else
        cout << "invalid input" << endl;

    return 0;
}