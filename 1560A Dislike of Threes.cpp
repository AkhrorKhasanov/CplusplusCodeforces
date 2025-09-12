#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        int i = 0, start = 1;
        while (i != k)
        {
            if (!(start % 3 == 0 || start % 10 == 3))
            {
                i++;
                        }
            start++;
        }
        cout << start - 1 << endl;
    }
    return 0;
}