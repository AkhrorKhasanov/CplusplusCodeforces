#include <iostream>
using namespace std;
int main()
{
    string arr[36];
    int c = 0;
    for (int i = 1; i < 10; i++)
    {
        string hlp = "";
        for (int j = 1; j < 5; j++)
        {
            hlp += '0' + i;
            arr[c] = hlp;
            c++;
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        int k;
        for (int i = 0; i < 36; i++)
        {
            if (arr[i] == n)
            {
                k = i + 1;
                break;
            }
        }
        int res = (k / 4) * 10;
        if (k % 4 == 1)
        {
            res += 1;
        }
        else if (k % 4 == 2)
        {
            res += 3;
        }
        else if (k % 4 == 3)
        {
            res += 6;
        }
        cout << res << endl;
    }
    return 0;
}