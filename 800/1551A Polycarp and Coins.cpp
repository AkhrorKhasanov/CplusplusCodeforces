#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int one = n / 3;
        int r = n % 3;
        int o = r % 2;
        one += o;
        int two = (n - one) / 2;
        cout << one << " " << two << endl;
    }
    return 0;
}