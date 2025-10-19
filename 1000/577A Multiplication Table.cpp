#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, x, c = 0;
    cin >> n >> x;
    for (int i = 1; i <= floor(pow(x, 0.5)); i++)
    {
        if (x % i == 0)
        {
            int hlp = x / i;
            if (hlp <= n && i <= n)
            {
                if (hlp != i)
                {
                    c += 2;
                }
                else
                {
                    c++;
                }
            }
        }
    }
    cout << c << endl;
    return 0;
}