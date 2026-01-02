#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int mini = 10000;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(arr[j] - arr[i]) < mini)
                {
                    mini = abs(arr[j] - arr[i]);
                }
            }
        }
        cout << mini << endl;
    }
    return 0;
}