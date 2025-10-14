#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int c = 0, i = 0;
    while (true)
    {
        if (c > n)
        {
            break;
        }
        c += (i * (i + 1)) / 2;
        i += 1;
    }
    cout << i - 2 << endl;
    return 0;
}