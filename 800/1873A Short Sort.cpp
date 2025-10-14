#include <iostream>
using namespace std;
int main()
{
    int t, i;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s == "abc")
        {
            cout << "YES" << endl;
        }
        else
        {
            for (i = 0; i < 3; i++)
            {
                if (s[i] == 'a')
                {
                    break;
                }
            }
            string res;
            if (i == 0)
            {
                if (s[1] == 'c' && s[2] == 'b')
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else if (i == 1)
            {
                if (s[0] == 'b')
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
            else
            {
                if (s[0] == 'c')
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}