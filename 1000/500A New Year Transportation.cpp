#include <iostream>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1;)
    {
        i = i + arr[i];
        if (i == t - 1)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}