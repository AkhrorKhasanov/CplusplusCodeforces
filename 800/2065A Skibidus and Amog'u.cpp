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
        if (s == "us")
        {
            cout << "i" << endl;
        }
        else
        {
            cout << s.substr(0, s.size() - 2) + 'i' << endl;
        }
    }
    return 0;
}