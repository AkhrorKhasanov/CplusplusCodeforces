#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0, res = 0;
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                c++;
            }
            else
            {
                if (c >= 3)
                {
                    cout << 2 << endl;
                    c = 0;
                    flag = true;
                    break;
                }
                else
                {
                    res += c;
                }
                c = 0;
            }
        }

        if (!flag)
        {
            if (c >= 3)
            {
                cout << 2 << endl;
            }
            else
            {
                res += c;
                c = 0;
                cout << res << endl;
            }
        }
    }
    return 0;
}