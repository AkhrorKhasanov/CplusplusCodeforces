#include <iostream>
using namespace std;
int main()
{
    int n, c = 0;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "Tetrahedron")
        {
            c += 4;
        }
        else if (s == "Cube")
        {
            c += 6;
        }
        else if (s == "Octahedron")
        {
            c += 8;
        }
        else if (s == "Dodecahedron")
        {
            c += 12;
        }
        else
        {
            c += 20;
        }
    }
    cout << c << endl;
    return 0;
}