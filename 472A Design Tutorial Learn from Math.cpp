#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << 4 << " " << n - 4 << endl;
    }
    else
    {
        int k = 2;
        while ((n - 2 * k) % 3 != 0)
        {
            k += 1;
        }

        cout << 2 * k << " " << n - 2 * k << endl;
    }
    return 0;
}