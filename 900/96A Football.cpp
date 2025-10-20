#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (a >= 7 || b >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
        if (s[i] == '0')
        {
            b = 0;
            a++;
        }
        else
        {
            a = 0;
            b++;
        }
    }
    if (a >= 7 || b >= 7)
    {
        cout << "YES" << endl;
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}