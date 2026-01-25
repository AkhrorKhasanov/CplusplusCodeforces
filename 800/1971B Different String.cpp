#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.size() == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            int hlp = -1;
            for (int i = 1; i < s.size(); i++)
            {
                if (s[i] != s[0])
                {
                    hlp = i;
                    break;
                }
            }
            if (hlp != -1)
            {
                cout << "YES" << endl;
                string res = "";
                res += s[hlp];
                for (int i = 1; i < s.size(); i++)
                {
                    if (i == hlp)
                    {
                        res += s[0];
                    }
                    else
                    {
                        res += s[i];
                    }
                }
                cout << res << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}