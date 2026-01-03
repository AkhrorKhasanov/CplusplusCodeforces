#include <iostream>
using namespace std;

int solve(char c)
{
    string hlp = "abcdefghijklmnopqrstuvwxyz";
    int res;
    for (int i = 0; i < 26; i++)
    {
        if (c == hlp[i])
        {
            res = i + 1;
            break;
        }
    }
    return res;
}

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
        int maks = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (maks < solve(s[i]))
            {
                maks = solve(s[i]);
            }
        }
        cout << maks << endl;
    }
    return 0;
}