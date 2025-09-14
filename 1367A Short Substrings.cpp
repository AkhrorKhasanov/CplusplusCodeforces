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
        string res = "";
        res += s[0];
        for (int i = 1; i < s.size() - 1; i += 2)
        {
            res += s[i];
        }
        res += s[s.size() - 1];
        cout << res << endl;
    }
    return 0;
}