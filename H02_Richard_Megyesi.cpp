#include <iostream>
#include <fstream>
using namespace std;
int n,b,i,j,x[100][100],s1=0,s2=0;
int main()
{
   ifstream in ("input.txt");
   ofstream out ("lkkt.out");
   in >> n;
   for (i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   in >> x[i][j];
   }
   }
   for (i=1;i<=n;i++)
   {
   for(j=1;j<=n;j++)
   {
   if (i<j)
   {
   s1=s1+x[i][j];
   }
   if (i>j)
   {
   s2=s2+x[i][j];
   }
   }
   }
   b=s1*s2;
   while (s1!=s2)
   {
       if (s1>s2)
       {
       s1=s1-s2;
       }
       if (s2>s1)
       {
       s2=s2-s1;
       }
   }
   b=b/s1;

   out << b;
}
