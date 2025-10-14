#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        bool b1 = tolower(s[0]) == 'y';
        bool b2 = tolower(s[1]) == 'e';
        bool b3 = tolower(s[2]) == 's';
        if (b1 && b2 && b3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}