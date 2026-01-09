#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, odd = 0, c = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            c += a;
            if (a % 2)
            {
                odd++;
            }
        }
        if (odd == 0 || (odd == n && n % 2 == 0))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}