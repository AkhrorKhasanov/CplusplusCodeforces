#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        bool flag = false;

        while (x.size() <= m * m)
        {
            x += x;
        }
        if (n > m * m)
        {
            x += x;
        }
        for (int i = 0; i < x.size(); i++)
        {
            string hlp = x.substr(i, m);
            if (hlp == s)
            {
                int len = i + m;
                int res = 0;
                while (n < len)
                {
                    n *= 2;
                    res++;
                }
                cout << res << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << -1 << endl;
        }
    }
    return 0;
}