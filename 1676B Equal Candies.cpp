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
        int k = n;
        int c = 0, mini = 10000001;
        while (n--)
        {
            int a;
            cin >> a;
            if (mini > a)
            {
                mini = a;
            }
            c += a;
        }
        cout << c - k * mini << endl;
    }
    return 0;
}