#include <iostream>

using namespace std;
int lnko (long a,long b)
{
if (a==b)
{
return a;
}
if (a>b)
{
return a;
}
if (a>b)
{
return lnko(a-b,b);
}
if (a<b)
{
return lnko(b-a,a);
}
}
int main()
{
    cout << lnko(6,12) << endl;
    return 0;
}
