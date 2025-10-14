#include <iostream>
using namespace std;
int main()
{
    int k, r, i = 0;
    cin >> k >> r;
    while (true)
    {
        i++;
        if (i * k % 10 == 0 || (i * k - r) % 10 == 0)
        {
            cout << i << endl;
            break;
        }
    }
    return 0;
}