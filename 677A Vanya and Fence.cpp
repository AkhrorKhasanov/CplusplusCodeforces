#include <iostream>
using namespace std;
int main()
{
    int n, h, c = 0;
    cin >> n >> h;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a > h)
        {
            c += 2;
        }
        else
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}