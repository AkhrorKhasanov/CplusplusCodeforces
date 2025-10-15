#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int x, res = 0;
    cin >> x;
    while (x)
    {
        res += x % 2;
        x /= 2;
    }
    cout << res << endl;
    return 0;
}