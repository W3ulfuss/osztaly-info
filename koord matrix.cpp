#include <iostream>

using namespace std;
int i,j,n,s=0,x[100][100];
int main()
{
    cin >> n;
    for (i=0;i<n;i++)
    {
    for (j=0;j<n;j++)
    {
    cin >> x[i][j];
    }
    }
    for (i=0;i<n;i++)
    {
    for (j=0;j<n;j++)
    {
    if (i!=j&&i+j!=n-1)
    {
    s=s+x[i][j];
    }
    }
    }
    cout << s;
}
