#include <iostream>
using namespace std;

int main()
{
    int n, maks = 0, c = 1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] > arr[i])
        {
            c++;
        }
        else
        {
            maks = max(maks, c);
            c = 1;
        }
    }
    maks = max(maks, c);
    cout << maks << endl;
    return 0;
}