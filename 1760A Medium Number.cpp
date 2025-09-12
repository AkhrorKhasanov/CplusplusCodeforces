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
        cout << a + b + c - min(a, min(b, c)) - max(a, max(b, c)) << endl;
    }
    return 0;
}