#include <iostream>
using namespace std;

int main()
{
    long long int n, k;
    cin >> n >> k;
    int hlp = n / 2;
    if (n % 2 == 1)
    {
        hlp += 1;
    }
    if (k <= hlp)
    {
        cout << 2 * k - 1 << endl;
    }
    else
    {
        k -= hlp;
        cout << 2 * k << endl;
    }
    return 0;
}