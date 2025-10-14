#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int s1 = max(2 * a, b);
        int s2 = max(a, 2 * b);
        int s3 = max(a + b, 2 * a);
        int s4 = max(a + b, 2 * b);
        int side = min(s1, min(s2, min(s3, s4)));
        cout << side * side << endl;
    }
    return 0;
}