#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string s = "";
    if (n == 1 && t == 10)
    {
        cout << -1 << endl;
    }
    else
    {

        if (t != 10)
        {
            for (int i = 0; i < n; i++)
            {
                char c = '0' + t;
                s += c;
            }
        }
        else
        {
            s += '1';
            for (int i = 1; i < n; i++)
            {
                s += '0';
            }
        }
        cout << s << endl;
    }
    return 0;
}