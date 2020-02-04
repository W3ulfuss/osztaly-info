#include <iostream>

using namespace std;
int i,y,n,m,v2[1000],v[1000];
int main()
{
    cin >> n;
    for (i=0; i<n; i++)
    {
        cin >> v[i];
    }
    cin >> m;
    for (y=0; y<m; y++)
    {
        cin >> v2[y];
    }
    for (i=0; i<n; i++)
    {
        for (y=0; y<m; y++)
        {
            if (v[i]==v2[y])
            {
                cout << v[i] << " ";
            }
        }
    }
}
