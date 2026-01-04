#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x = 0, y = 0;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            char c = s[i];
            if (c == 'L')
            {
                x--;
            }
            else if (c == 'R')
            {
                x++;
            }
            else if (c == 'D')
            {
                y--;
            }
            else
            {
                y++;
            }
            if (x == 1 && y == 1)
            {
                cout << "YES" << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
    }
}