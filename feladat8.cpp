#include <iostream>

using namespace std;
int n,i,y,mx=-9999;
int main()
{
    cin>>n;
    for (i=1;i<=n;i++)
    {
    if (i>mx)
    {
    mx=i;
    y+1=i;
    }
    if (i<mx)
    {
    y-1=i;
    }
    }
    for (y=0;y<=n;y++)
    {
    cout << y " ";
    }
}
