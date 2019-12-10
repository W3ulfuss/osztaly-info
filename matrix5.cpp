#include <iostream>
#include <fstream>
using namespace std;
int v[100],n,j,i,aux;
int main()
{
    fstream in ("input.txt");

     for (i=0;i<n;i++)
     {
     in >> v[i];
     n++;
     }
     if (v[i]%2!=0)
     for (i=0;i<n;i++)
     {
     for(j=i+1;j<n;j++)
     {
     if (v[i]>v[j])
     {
     aux=v[j];
     v[j]=v[i];
     v[i]=aux;
     }
     }
     cout << v[i];
     }





}
