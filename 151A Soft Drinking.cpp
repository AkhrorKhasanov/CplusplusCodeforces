#include <iostream>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x1 = (k * l) / nl;
    int x2 = c * d;
    int x3 = p / np;
    cout << min(x1, min(x2, x3)) / n << endl;
    return 0;
}