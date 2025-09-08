#include <iostream>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        arr[i] = s;
    }
    if (n == 1)
    {
        cout << 1 << endl;
    }
    else
    {
        int c = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (arr[i] != arr[i + 1])
            {
                c++;
            }
        }
        cout << c << endl;
    }
    return 0;
}