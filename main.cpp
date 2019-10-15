#include <iostream>
#include <string>
using namespace std;
int sz=0;
int main()
{
   string a,b;
   cin >> b;
   sz=b.length();
   if (b.length()<3)
   {
   cout << "nedterminat";
   }
   a.append(b,sz-3c,3);
   cout << a;
}
