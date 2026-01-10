#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s, hlp = "ABCDEFG";
        cin >> s;
        map<char, int> mp;
        for (int i = 0; i < 7; i++)
        {
            mp[hlp[i]] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        int c = 0;
        for (auto e : mp)
        {
            if (e.second < m)
            {
                c += m - e.second;
            }
        }
        cout << c << endl;
    }
    return 0;
}