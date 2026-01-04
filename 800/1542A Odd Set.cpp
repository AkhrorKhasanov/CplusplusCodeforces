#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int odd = 0, even = 0;
        n *= 2;
        while (n--)
        {
            int a;
            cin >> a;
            if (a % 2)
            {
                odd++;
            }
            else
            {
                even++;
            }
        }
        if (odd == even)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}