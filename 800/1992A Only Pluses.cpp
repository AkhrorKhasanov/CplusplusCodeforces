#include <iostream>
using namespace std;

int min_index(int arr[])
{
    int res, mini = 1000;
    for (int i = 0; i < 3; i++)
    {
        if (arr[i] < mini)
        {
            mini = arr[i];
            res = i;
        }
    }
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        int c = 5;
        cin >> arr[0] >> arr[1] >> arr[2];
        while (c)
        {
            int ind = min_index(arr);
            arr[ind]++;
            c--;
        }
        cout << arr[0] * arr[1] * arr[2] << endl;
    }
    return 0;
}