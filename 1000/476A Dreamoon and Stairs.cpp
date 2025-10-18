#include <iostream>
using namespace std;

int main()
{
    int n, m, res;
    cin >> n >> m;
    if (n < m)
    {
        cout << -1 << endl;
        return 0;
    }
    if (n % 2 == 0)
    {
        res = n / 2;
    }
    else
    {
        res = n / 2 + 1;
    }
    while (res % m != 0)
    {
        res++;
    }
    cout << res << endl;
    return 0;
}