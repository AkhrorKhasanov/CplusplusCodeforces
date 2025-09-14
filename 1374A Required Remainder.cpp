    #include <iostream>
    using namespace std;
    int main()
    {
        int t;
        cin >> t;
        while (t--)
        {
            int x, y, n;
            cin >> x >> y >> n;
            if ((n / x) * x + y > n)
            {
                cout << (n / x - 1) * x + y << endl;
            }
            else
            {
                cout << (n / x) * x + y << endl;
            }
        }
        return 0;
    }