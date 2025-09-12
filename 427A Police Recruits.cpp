#include <iostream>
using namespace std;
int main()
{
    int n, a, c = 0, res = 0;
    cin >> n;
    while (n--)
    {
        cin >> a;
        if (a > 0)
        {
            c += a;
        }
        else if (a < 0)
        {
            if (c > 0)
            {
                c--;
            }
            else
            {
                res += 1;
            }
        }
    }
    cout << res << endl;
    return 0;
}