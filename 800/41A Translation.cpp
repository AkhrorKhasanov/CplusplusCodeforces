#include <iostream>
using namespace std;
int main()
{
    string s1, s2, temp = "";
    cin >> s1 >> s2;
    for (int i = s2.size() - 1; i >= 0; i--)
    {
        temp += s2[i];
    }
    if (s1 == temp)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}