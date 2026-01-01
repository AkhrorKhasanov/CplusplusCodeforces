#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        if (n <= 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << ceil((n - 2) / (x * 1.0)) + 1 << endl;
        }
    }
    return 0;
}