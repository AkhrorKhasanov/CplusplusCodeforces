#include <iostream>
using namespace std;
unsigned long long int solve(int arr[], int n)
{
    unsigned long long p = 1;
    for (int i = 0; i < n; i++)
    {
        p *= arr[i];
    }
    return p;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        bool flag = true;
        int n, mini = 10;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < mini)
            {
                mini = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == mini)
            {
                arr[i]++;
                break;
            }
        }
        cout << solve(arr, n) << endl;
    }
    return 0;
}