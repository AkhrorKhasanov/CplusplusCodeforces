#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, a, b, c, left, res = 0;
        cin >> m >> a >> b >> c;
        if (m > a)
        {
            res += a;
            left = m - a;
        }
        else
        {
            res += m;
            left = 0;
        }
        if (m > b)
        {
            res += b;
            left += m - b;
        }
        else
        {
            res += m;
        }
        if (left > c)
        {
            res += c;
        }
        else
        {
            res += left;
        }
        cout << res << endl;
    }
    return 0;
}