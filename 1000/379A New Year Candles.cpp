#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int res = a;
    while (a)
    {
        res += a / b;
        a = a / b + a % b;
        if (a < b)
        {
            break;
        }
    }
    cout << res << endl;
    return 0;
}