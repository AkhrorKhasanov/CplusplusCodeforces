#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int maks = -1;
        int res;
        for (int i = 2; i <= n; i++)
        {
            int k = 1;
            int s = 0;
            while (true)
            {
                if (k * i > n)
                {
                    break;
                }
                s += k * i;
                k++;
            }
            if (s > maks)
            {
                maks = s;
                res = i;
            }
        }
        cout << res << endl;
    }
    return 0;
}