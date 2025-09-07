#include <iostream>
using namespace std;
int main()
{
    int k, n, w;
    cin >> k >> n >> w;
    int s = (1 + w) * w * k / 2;
    if (n < s)
    {
        cout << s - n << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}