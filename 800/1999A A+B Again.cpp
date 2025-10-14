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
        int one = s[0] - '0';
        int two = s[1] - '0';
        cout << one + two << endl;
        }
    return 0;
}