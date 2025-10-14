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
        int c = 0, hlp = 0;
        while (n--)
        {
            int a;
            cin >> a;
            if (a)
            {
                c = max(c, hlp);
                hlp = 0;
            }
            else
            {
                hlp++;
            }
        }
        cout << max(c, hlp) << endl;
    }
    return 0;
}