#include <iostream>
#include <stdlib.h>
using namespace std;
int n,m,i,x[1000][1000],j;
int main()
{
    cin >> n;
    cin >> m;
    for (i=1;i<=n;i++)
    for (j=1;j<=m;j++)
        cin >> x[i][j];
    for (i=1;i<=n;i++){
    for (j=1;j<=m;j++){
        if (j==i) x[i][j]=0;
        if (i>j) x[i][j]=-x[i][j];
        cout << x[i][j] << "  ";
    }
    cout << endl;
    }
}
