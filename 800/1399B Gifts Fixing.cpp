#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        unsigned long long c = 0;
        int n, mini1 = 1000000001, mini2 = 1000000001;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < mini1)
            {
                mini1 = a[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] < mini2)
            {
                mini2 = b[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            int A = a[i] - mini1;
            int B = b[i] - mini2;
            c += max(A, B);
        }
        cout << c << endl;
    }
    return 0;
}