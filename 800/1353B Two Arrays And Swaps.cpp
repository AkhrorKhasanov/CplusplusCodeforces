#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        int j = 0;
        while (k--)
        {
            if (a[j] < b[n - j - 1])
            {
                a[j] = b[n - j - 1];
            }
            j++;
        }
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            res += a[i];
        }
        cout << res << endl;
    }
    return 0;
}