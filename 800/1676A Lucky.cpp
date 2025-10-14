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
        int c1 = 0, c2 = 0;
        for (int i = 0; i < 6; i++)
        {
            if (i < 3)
            {
                c1 += s[i] - '0';
            }
            else
            {
                c2 += s[i] - '0';
            }
        }
        if (c1 == c2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}