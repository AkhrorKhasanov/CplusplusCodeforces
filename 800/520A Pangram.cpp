#include <iostream>
#include <cctype>
#include <map>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    string s, alphabet = "abcdefghijklmnopqrstuvwxyz";
    map<char, int> m;
    for (int i = 0; i < alphabet.size(); i++)
    {
        m[alphabet[i]] = 0;
    }
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        m[tolower(s[i])]++;
    }
    for (auto e : m)
    {
        if (e.second == 0)
        {
            cout << "NO" << endl;
            exit(0);
        }
    }
    cout << "YES" << endl;
    return 0;
}