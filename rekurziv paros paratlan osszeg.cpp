#include <iostream>

using namespace std;
long sumparatlan(long n);
long sumparos(long n)
{
    if (n==0){return 0;}
    return n+sumparatlan(n-1);}
long sumparatlan(long n)
{


     if (n==0){return 0;}
    return n+sumparos(n-1);}

int main()
{
    long n;
 cin >> n;
 if (n%2==0)
 {
 cout << sumparos(n);
 }
 if (n%2!=0)
 {
 cout << sumparatlan(n);
 }
 return 0;
}
