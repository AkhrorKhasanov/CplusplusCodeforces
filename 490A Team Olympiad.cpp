#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int one = 0, two = 0, three = 0;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == 1)
        {
            v1.push_back(i + 1);
            one++;
        }
        else if (a == 2)
        {
            v2.push_back(i + 1);
            two++;
        }
        else
        {
            v3.push_back(i + 1);
            three++;
        }
    }
    int mini = min(one, min(two, three));
    cout << mini << endl;
    for (int i = 0; i < mini; i++)
    {
        cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
    }
    return 0;
}