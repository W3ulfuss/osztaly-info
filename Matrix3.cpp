#include <iostream>

using namespace std;
int n,i,j,x[100][100],s=0;
int main()
{
    cin >> n;
    for (i=0;i<n;i++)
    {
    for (j=0;j<n;j++)
    {
    cout << "matrix[ " << i << "][ " << j<<"]"<< " ";
    cin >> x[i][j];
    }
    cout << endl;
    }
    for (i=0;i<n;i++)
    {
    s=0;
    for (j=0;j<n;j++)
    {
    s=s+x[i][j];
    }
    cout << s;
    }

}
