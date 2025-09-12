#include <iostream>
using namespace std;
int main()
{
    int t;
    string s = "codeforces";
    cin >> t;
    while (t--)
    {
        char c;
        bool flag = true;
        cin >> c;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == c)
            {
                cout << "YES" << endl;
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}