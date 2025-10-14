#include <iostream>
using namespace std;

int main()
{
    string s, res = "", hlp = "hello";
    cin >> s;
    int i = 0, j = 0;
    while (i < hlp.size())
    {
        for (int k = j; k < s.size(); k++)
        {
            if (s[k] == hlp[i])
            {
                res += s[k];
                j = k + 1;
                break;
            }
        }
        i++;
    }
    if (res == "hello")
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}