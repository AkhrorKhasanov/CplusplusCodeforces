#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, a, b;
        cin >> n >> a >> b;

        int one = n * a;
        int two = (n / 2) * b + (n % 2) * a;

        cout << min(one, two) << endl;
    }
    return 0;
}