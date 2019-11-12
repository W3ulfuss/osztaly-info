#include <iostream>

using namespace std;
long sum(long n)
{
if (n==0){return 0;}
return n+sum(n-1);
}
int main()
{
    long n;
    cin >>n;
    cout << sum(n);
}
