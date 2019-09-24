#include <iostream>

using namespace std;
int n,m,j,i,x[100][100];
int main()
{
    cin >> n;
    cin >> m;
    for (i=1;i<=n;i++)
    {
    for (j=1;j<=m;j++)
    {
    cin >> x[i][j];
    }
    }
    for (i=1;i<=n;i++)
    {
    for (j=1;j<=m;j++)
    {
    cout << x[i][j]<< " ";

    }
    cout << endl;
    }

}
