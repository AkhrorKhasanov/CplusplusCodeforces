#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    if (s.size() == 1)
    {
        if (s[0] == tolower(s[0]))
        {
            cout << string(1, toupper(s[0])) << endl;
        }
        else
        {
            cout << string(1, tolower(s[0])) << endl;
        }
    }
    else
    {
        bool flag = false;
        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] == tolower(s[i]))
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << s << endl;
        }
        else
        {
            string res = "";
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == tolower(s[i]))
                {
                    res += toupper(s[i]);
                }
                else
                {
                    res += tolower(s[i]);
                }
            }
            cout << res << endl;
        }
    }
    return 0;
}