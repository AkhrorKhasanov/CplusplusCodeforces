#include <iostream>
using namespace std;
int main()
{
    int n, a = 0, d = 0;
    string s;
    cin >> n;
    cin >> s;
    for (char ch : s)
    {
        if (ch == 'A')
        {
            a++;
        }
        else
        {
            d++;
        }
    }
    if (a > d)
    {
        cout << "Anton" << endl;
    }
    else if (a < d)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}