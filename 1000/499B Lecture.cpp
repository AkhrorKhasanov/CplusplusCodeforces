#include <iostream>
#include <map>
using namespace std;

int main()
{
    int n, m;
    map<string, string> mp;
    string res = "";
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        string s1, s2;
        cin >> s1 >> s2;
        mp[s1] = s2;
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        string c = mp[s];
        if (s.size() <= c.size())
        {
            res += s + " ";
        }
        else
        {
            res += c + " ";
        }
    }
    cout << res << endl;
    return 0;
}