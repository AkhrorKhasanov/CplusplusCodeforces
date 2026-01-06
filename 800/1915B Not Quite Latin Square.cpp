#include <iostream>
using namespace std;

bool solve(string s)
{
    bool res = false;
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == '?')
        {
            res = true;
            break;
        }
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 3; i++)
        {
            string s;
            cin >> s;
            if (solve(s))
            {
                bool A = false;
                bool B = false;
                bool C = false;
                for (int j = 0; j < 3; j++)
                {
                    if (s[j] == 'A')
                    {
                        A = true;
                    }
                    else if (s[j] == 'B')
                    {
                        B = true;
                    }
                    else if (s[j] == 'C')
                    {
                        C = true;
                    }
                }
                if (!A)
                {
                    cout << 'A' << endl;
                }
                else if (!B)
                {
                    cout << 'B' << endl;
                }
                else if (!C)
                {
                    cout << 'C' << endl;
                }
            }
        }
    }
    return 0;
}