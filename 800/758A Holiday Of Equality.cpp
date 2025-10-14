#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int maks = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] > maks)
        {
            maks = arr[i];
        }
    }
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        c += maks - arr[i];
    }
    cout << c << endl;
    return 0;
}