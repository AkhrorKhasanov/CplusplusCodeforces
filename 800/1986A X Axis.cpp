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
        int mini = min(a, min(b, c));
        int maks = max(a, max(b, c));
        cout << maks - mini << endl;
    }
    return 0;
}