#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int arr[10];
    for (int i = 10; i >= 1; i--)
    {
        arr[10 - i] = i;
    }
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int c = 0;
        int r = abs(a - b);
        for (int i = 0; i < 10; i++)
        {
            c += r / arr[i];
            r %= arr[i];
        }
        cout << c << endl;
    }
    return 0;
}