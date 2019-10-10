#include <iostream>
#include <string>
using namespace std;
int nr=0,a;
int main()
{
    string a,b= " ";
    getline(cin,a);
    size_t hely;
    int elofordul =1;
    hely=a.find(b);
    while (hely!=string::npos)
    {
    hely=a.find(b,hely+1);
    elofordul++;
    }
    cout << elofordul;


}
