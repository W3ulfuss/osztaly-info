#include <iostream>

using namespace std;
int i;
int main()
{
    string test;
    cin >> test;
    for (i=0;i<test.length();i++)
    {
    if (test[i]=='a')
    {
    test.replace (i,1,"A");
    }
    }
    cout << test;
}
