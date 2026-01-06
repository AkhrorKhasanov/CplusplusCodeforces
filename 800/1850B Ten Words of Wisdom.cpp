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
        int res, maks = 0, c = 0;
        while (n--)
        {
            c++;
            int a, b;
            cin >> a >> b;
            if (a <= 10)
            {
                if (maks < b)
                {
                    maks = b;
                    res = c;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}