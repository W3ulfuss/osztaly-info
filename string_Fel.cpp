#include <iostream>
#include <fstream>
using namespace std;
int S=0,db=0,Smax=0,a;
int main()
{
    fstream in("input.txt");
    while (in>>a)
    {
        if (S+a<0)
        {
            S=0;
            db=0;
        }
        else
        {
            S=S+a;
            db++;
        }

    }
    cout << S;

}

