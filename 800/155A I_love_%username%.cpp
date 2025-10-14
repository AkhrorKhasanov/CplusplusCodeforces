#include <iostream>
using namespace std;
int main()
{
    int n, c = 0;
    cin >> n;
    int arr[2];
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (i == 0)
        {
            arr[0] = a;
            arr[1] = a;
        }
        else
        {
            if (a > arr[1])
            {
                c++;
                arr[1] = a;
            }
            if (a < arr[0])
            {
                c++;
                arr[0] = a;
            }
        }
    }
    cout << c << endl;
    return 0;
}