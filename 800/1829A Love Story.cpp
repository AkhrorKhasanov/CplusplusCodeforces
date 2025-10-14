#include <iostream>
using namespace std;
int main()
{
    string st = "codeforces";
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int c = 0;
        for (int i = 0; i < 10; i++)
        {
            if (s[i] != st[i])
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}