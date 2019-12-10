#include <iostream>
#include <cstring>
using namespace std;
char a[100]="sergiu", b[100]="tuduce";
int main()
{
strncpy(a,b,4);
cout<<a<<endl;
cout<<b<<endl;
}
