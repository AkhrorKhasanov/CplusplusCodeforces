#include <iostream>
using namespace std;
int main()
{
    int a, b, c1, d;
    cin >> a >> b >> c1 >> d;
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            c += a;
        }
        else if (s[i] == '2')
        {
            c += b;
        }
        else if (s[i] == '3')
        {
            c += c1;
        }
        else
        {
            c += d;
        }
    }
    cout << c << endl;
    return 0;
}