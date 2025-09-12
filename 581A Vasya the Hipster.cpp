#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int mini = min(a, b);
    int l = (max(a, b) - mini) / 2;
    cout << mini << " " << l << endl;
    return 0;
}