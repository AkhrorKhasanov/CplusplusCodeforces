#include <iostream>
using namespace std;
int main()
{
    int arr[4];
    int maks = 1;
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
        if (arr[i] > maks)
        {
            maks = arr[i];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] != maks)
        {
            cout << maks - arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}