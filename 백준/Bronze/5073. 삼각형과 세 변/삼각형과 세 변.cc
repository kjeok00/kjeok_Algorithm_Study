#include <iostream>
#include <algorithm> 
using namespace std;

int main()
{
    while (true) {
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        if (a1 == 0 && a2 == 0 && a3 == 0) {
            break;
        }

        int sum = a1 + a2 + a3;
        int max_angle = max({ a1, a2, a3 });
    
        if (max_angle >= sum - max_angle)
            cout << "Invalid" << endl;
        else if (a1 == a2 && a2 == a3 && a1 == a3)
            cout << "Equilateral" << endl;
        else if (a1 != a2 && a2 != a3 && a1 != a3)
            cout << "Scalene" << endl;
        else
            cout << "Isosceles" << endl;
    }
    return 0;
}
