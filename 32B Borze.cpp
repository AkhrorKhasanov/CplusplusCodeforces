#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int i = 0;
    while (i < s.size())
    {
        if (i < s.size() - 1 && s.substr(i, 2) == "-.")
        {
            i += 2;
            cout << 1;
        }
        else if (i < s.size() - 1 && s.substr(i, 2) == "--")
        {
            i += 2;
            cout << 2;
        }
        else
        {
            i++;
            cout << 0;
        }
    }
    return 0;
}