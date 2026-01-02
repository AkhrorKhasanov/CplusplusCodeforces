#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, n, maks;
        cin >> a >> b >> c >> n;
        maks = max(a, max(b, c));
        n = n - (3 * maks - (a + b + c));
        if (n < 0 || n % 3 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}