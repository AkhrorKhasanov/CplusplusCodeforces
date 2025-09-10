#include <iostream>
using namespace std;
int main()
{
    int n, m, i = 0, k = 0;
    cin >> n >> m;
    string res = "";
    while (i < n)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < m; j++)
            {
                res += '#';
            }
            cout << res << endl;
            res = "";
        }
        else
        {
            if (k % 2 == 0)
            {
                for (int j = 0; j < m - 1; j++)
                {
                    res += '.';
                }
                res += '#';
                cout << res << endl;
                res = "";
            }
            else
            {
                res += '#';
                for (int j = 1; j < m; j++)
                {
                    res += '.';
                }
                cout << res << endl;
                res = "";
            }
            k++;
        }
        i++;
    }
}