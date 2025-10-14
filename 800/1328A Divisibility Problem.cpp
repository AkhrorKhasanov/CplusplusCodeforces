#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t, a, b, i;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        int c = ceil(a * 1.0 / b);
        cout << c * b - a << endl;
    }
}