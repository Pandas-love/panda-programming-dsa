#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (1 <= n && n <= 20 && n % 2 != 0)
    {
        int m;
        m = n;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j != m)
                {
                    if (i == j)
                        cout << "\\";
                    else
                        cout << " ";
                }
                if (j == m)
                {
                    if (m == (n / 2 + 1))
                        cout << "X";
                    else
                        cout << "/";
                }
            }
            m--;
            cout << endl;
        }
    }
    return 0;
}