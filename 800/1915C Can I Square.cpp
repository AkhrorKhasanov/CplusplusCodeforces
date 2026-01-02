#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unsigned long long c = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            c += a;
        }
        if (pow(floor(sqrt(c)), 2) == c)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}