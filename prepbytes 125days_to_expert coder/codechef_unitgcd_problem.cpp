// https://www.codechef.com/problems/UNITGCD//
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
        if (n == 1)
        {
            cout << 1 << " "
                 << "\n";
            cout << "1 1\n";
        }
        else if (n == 2)
        {
            cout << 1 << " "
                 << "\n";
            cout << "2 1 2/n";
        }
        else if (n == 3)
        {
            cout << 1 << " "
                 << "/n";
            cout << "3 1 2 3\n";
        }
        else
        {
            int day = n / 2;
            if (n % 2 == 0)
            {
                cout << day << "\n";
                for (int i = 1; i < n; i = i + 2)
                    cout << "2 " << i << " " << i + 1 << "\n";
            }
            else
            {
                cout << day << "\n";
                cout << "3 "
                     << "1 2 3\n";
                for (int i = 4; i < n; i = i + 2)
                {
                    cout << "2 " << i << " " << i + 1 << "\n";
                }
            }
        }
    }
    return 0;
}
