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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int j = 0; j < n; j++)
        {

            for (int i = 1; i < n - 1; i++)
            {
                if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
                {
                    int temp = arr[i + 1];
                    arr[i + 1] = arr[i];
                    arr[i] = temp;
                }
            }
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != i + 1)
            {
                flag = true;
                cout << "NO" << endl;
                break;
            }
        }
        if (!flag)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}