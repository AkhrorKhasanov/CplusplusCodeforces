#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string res = "";
        for (int i = 0; i < 8; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < 8; j++)
            {
                if (s[j] != '.')
                {
                    res += s[j];
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}