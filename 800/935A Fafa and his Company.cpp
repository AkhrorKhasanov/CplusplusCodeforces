#include <iostream>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    for (int i = 1; i <= n / 2; i++)
    {
        if ((n - i) % i == 0)
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}