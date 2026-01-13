#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n, c = 0;
        cin >> a >> b >> n;
        while (!(a > n || b > n))
        {
            c++;
            int res = a + b;
            if (a > b)
            {
                b = res;
            }
            else
            {
                a = res;
            }
        }
        cout << c << endl;
    }
    return 0;
}