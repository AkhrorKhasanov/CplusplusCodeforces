#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int first = a - 1;
        int two;
        if (b > c)
        {
            two = b - 1;
        }
        else
        {
            two = 2 * c - b - 1;
        }
        if (first < two)
        {
            cout << 1 << endl;
        }
        else if (first > two)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 3 << endl;
        }
    }
    return 0;
}