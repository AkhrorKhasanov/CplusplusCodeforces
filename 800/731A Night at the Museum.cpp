#include <iostream>
using namespace std;

int main()
{
    string s, hlp = "abcdefghijklmnopqrstuvwxyz";
    int pos, old_pos = 1, res = 0;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if (s[i] == hlp[j])
            {
                pos = j + 1;
                break;
            }
        }
        int len = abs(pos - old_pos);
        if (len > 13)
        {
            res += 26 - len;
        }
        else
        {
            res += len;
        }
        old_pos = pos;
    }
    cout << res << endl;
    return 0;
}