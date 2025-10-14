#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, c1 = 0, c2 = 0;
        cin >> a >> b >> c;
        c1 += c / 2 + c % 2 + a;
        c2 += c / 2 + b;
        if (c1 > c2)
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
    }
    return 0;
}