#include <iostream>
#include <numeric>
using namespace std;
int main()
{
    int y, w;
    cin >> y >> w;
    int maks;
    if (y > w)
    {
        maks = y;
    }
    else
    {
        maks = w;
    }
    int hlp = 6 - maks + 1;
    if (hlp == 0)
    {
        cout << 0 << "/" << 1 << endl;
    }
    else
    {
        int e = gcd(hlp, 6);
        cout << hlp / e << "/" << 6 / e << endl;
    }
    return 0;
}