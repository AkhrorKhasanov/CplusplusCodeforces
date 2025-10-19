#include <iostream>
using namespace std;

int main()
{
    int n, a, b, c = 0;
    cin >> n >> a >> b;
    for (int i = a + 1; i <= n; i++)
    {
        for (int j = n; j >= n - b; j--)
        {
            if (i == j)
            {
                c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}