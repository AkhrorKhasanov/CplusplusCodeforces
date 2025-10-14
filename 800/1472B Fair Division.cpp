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
        int c = 0, c1 = 0, c2 = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            c += a;
            if (a == 1)
            {
                c1++;
            }
            else
            {
                c2++;
            }
        }
        if (n % 2 == 1 && (c1 == 0 || c2 == 0))
        {
            cout << "NO" << endl;
        }
        else if (c % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else if (c % 2 == 1)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}