#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string s, res = "", ans = "";
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        bool b1 = tolower(s[i]) == 'a';
        bool b2 = tolower(s[i]) == 'o';
        bool b3 = tolower(s[i]) == 'y';
        bool b4 = tolower(s[i]) == 'u';
        bool b5 = tolower(s[i]) == 'i';
        bool b6 = tolower(s[i]) == 'e';
        if (!b1 && !b2 && !b3 && !b4 && !b5 && !b6)
        {
            res += tolower(s[i]);
        }
    }
    for (int i = 0; i < res.size(); i++)
    {
        ans += '.';
        ans += res[i];
    }
    cout << ans << endl;
    return 0;
}