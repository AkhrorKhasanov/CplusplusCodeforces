#include <iostream>
#include <set>
#include <algorithm>
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
        set<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }
        sort(arr, arr + n, greater<int>());
        if (s.size() == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int temp = arr[1];
            arr[1] = arr[n - 1];
            arr[n - 1] = temp;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}