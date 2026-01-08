#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, hlp = "0123456789";
        bool flag = false;
        cin >> s;
        for (int i = 0; i < 10; i++)
        {
            if (flag)
            {
                break;
            }
            for (int j = 0; j < s.size(); j++)
            {
                if (hlp[i] == s[j])
                {
                    cout << hlp[i] << endl;
                    flag = true;
                    break;
                }
            }
        }
    }
    return 0;
}