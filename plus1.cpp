#include <iostream>
#include <fstream>
using namespace std;
int a,mx=-9999,mx2=-9999,nr=0,t=0;
int main()
{
    ifstream in ("bac.txt");
    ofstream out ("output.txt");
    while (in>>a)
    {
    if (a%2!=0)
    {
    nr++;
    }
    if (nr==3&&a%2==0)
    {
    t=1;
    if (a>mx)
    {
    mx2=mx;
    mx=a;
    }
    if (a<mx && a>mx2)
    {
    mx2=a;
    }
    }
    }
    if (t==1)
    {out << mx <<" " <<mx2;}
    if (t==0)
    {
        out << "nincs";
    }
    }

