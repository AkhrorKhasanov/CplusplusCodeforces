#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, y, a, b, m, res = 0;
        cin >> x >> y >> a >> b;
        m = min(x, y);
        if (b < 2 * a)
        {
            x -= m;
            y -= m;
            res = m * b;
        }
        res += (x + y) * a;
        cout << res << endl;
    }
    return 0;
}