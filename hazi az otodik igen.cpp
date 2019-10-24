#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int i,y;
int main()
{
    string a;
    fstream in ("input.txt");
    ofstream out1 ("vezetekes.txt");
    ofstream out2 ("digi.txt");
    ofstream out3 ("orange.txt");
    ofstream out4 ("vodafone.txt");
    while (in>>a)
    {

        if (a.length()==6)
        {
            if (a[0]=='6')
            {
                a.insert(0,"0040260");
                out1 << a << endl;
            }
        }
        if (a.length()==7)
        {
            if (a[0]=='2')
            {
                a.insert(0,"00407");
                out4 << a << endl;
            }
            if (a[0]=='7')
            {
                a.insert(0,"00407");
                out2 << a << endl;
            }
            if (a[0]=='4')
            {
                a.insert(0,"00407");
                out3 << a << endl;
            }

        }

   }
}


