#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maks = 0, c = 1;
    int old;
    cin >> old;
    n--;
    while (n--)
    {
        int a;
        cin >> a;
        if (a >= old)
        {
            c++;
        }
        else
        {
            maks = max(c, maks);
            c = 1;
        }
        old = a;
    }
    maks = max(c, maks);

    cout << maks << endl;

    return 0;
}