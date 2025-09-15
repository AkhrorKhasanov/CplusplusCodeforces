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
        int mini = 1000000001, maks = 0;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a > maks)
            {
                maks = a;
            }
            if (a < mini)
            {
                mini = a;
            }
        }
        cout << maks - mini << endl;
    }
    return 0;
}