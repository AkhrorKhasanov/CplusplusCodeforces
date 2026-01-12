#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c = 0;
        cin >> n;
        for (int i = 0; i < n - 1; i++)
        {
            int a;
            cin >> a;
            c += a;
        }
        cout << -c << endl;
    }
    return 0;
}