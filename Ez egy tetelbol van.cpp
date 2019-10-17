#include <iostream>
#include <string>
using namespace std;
int n,k,i,sz;
int main()
{
    string a[20];
    cin >> n;
    cin >> k;
    for (i=0;i<n;i++)
    {
    cin >> a[i];
    }
    for (i=0;i<n;i++)
    {if (a[i].length()==k)
    {
    cout << a[i] << " ";
    }}
    for (i=0;i<n;i++)
    {
    if (a[i].length()!=k)
    {
    cout << a[i] << " ";
    }
    }

}
