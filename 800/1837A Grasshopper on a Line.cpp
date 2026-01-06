#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, k;
        cin >> x >> k;
        if (x % k == 0)
        {
            cout << 2 << endl;
            cout << 1 << " " << x - 1 << endl;
        }
        else
        {
            cout << 1 << endl;
            cout << x << endl;
        }
    }
    return 0;
}