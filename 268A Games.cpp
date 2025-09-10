#include <iostream>
using namespace std;
int main()
{
    int n, h, a, c = 0;
    cin >> n;
    int arr1[n];
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h >> a;
        arr1[i] = h;
        arr2[i] = a;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr1[i] == arr2[j])
            {
                c++;
            }
        }
    }
    cout << c << endl;
    return 0;
}