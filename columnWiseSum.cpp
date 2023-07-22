#include <iostream>
using namespace std;
int main()
{

    int b[100][100], n, m;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum += b[j][i];
        }
        cout << sum << " ";
    }

    return 0;
}