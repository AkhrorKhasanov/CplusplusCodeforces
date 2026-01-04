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
        string s;
        cin >> s;
        int one, two;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B')
            {
                one = i + 1;
                break;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
            {
                two = i + 1;
                break;
            }
        }
        cout << two - one + 1 << endl;
    }
    return 0;
}