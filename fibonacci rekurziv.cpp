#include <iostream>

using namespace std;
long fib1(long n)
{
if (n==0)
{
return 0;
}
if (n==1)
{
return 1;
}
return fib1(n-1)+fib1(n-2);
}
int main()
{
    long n;
    cin >> n;
    cout << fib1(n);
}
