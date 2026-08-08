#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, plus = 0, minus = 0, c = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (a > 0) plus++;
            if (a < 0) minus++;
        }
        while (!(plus >= minus && minus % 2 == 0))
        {
            minus--;
            plus++;
            c++;
        }
        cout << c << endl;
    }
    return 0;
}