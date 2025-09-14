#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        bool flag = true;
        cin >> n >> k;
        while (n--)
        {
            int a;
            cin >> a;
            if (a == k)
            {
                flag = false;
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}