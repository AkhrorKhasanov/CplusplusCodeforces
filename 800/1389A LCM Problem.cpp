#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        if (2 * l <= r)
        {
            cout << l << " " << 2 * l << endl;
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }
    return 0;
}