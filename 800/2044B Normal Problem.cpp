#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s, res1 = "", res = "";
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'p')
            {
                res1 += 'q';
            }
            else if (s[i] == 'q')
            {
                res1 += 'p';
            }
            else
            {
                res1 += 'w';
            }
        }
        for (int i = s.size() - 1; i >= 0; i--)
        {
            res += res1[i];
        }
        cout << res << endl;
    }
    return 0;
}