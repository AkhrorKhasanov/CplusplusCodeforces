#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c1, d;
        cin >> a >> b >> c1 >> d;
        int c = 0;
        if (a < b)
        {
            c++;
        }
        if (a < c1)
        {
            c++;
        }
        if (a < d)
        {
            c++;
        }
        cout << c << endl;
    }
    return 0;
}