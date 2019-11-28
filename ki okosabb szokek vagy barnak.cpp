#include <iostream>
#include <string>
using namespace std;
struct osztaly{
string nev;
float media;
string hajszin;
}XIB[32];
int main()
{
    int a,i,bsz=0,bn=0;
    float szoke,barna,ssz=0,bar=0,szok=0,sb=0;
    cin >> a;
    for (i=0;i<a;i++)
    {
    cin >> XIB[i].nev;
    cin >> XIB[i].hajszin;
    cin >> XIB[i].media;
    }
    for (i=0;i<a;i++)
    {
    if (XIB[i].hajszin=="barna")
    {
    sb=sb + XIB[i].media;
    bn++;
    }
    if (XIB[i].hajszin=="szoke")
    {
    ssz=ssz+ XIB[i].media;
    bsz++;
    }
    }
    bar=sb/bn;
    szok=ssz/bsz;
    cout << bar;
    cout << szok;
    if (bar>szok)
    {
        cout << "barna";
    }
    if (szok>bar)
    {
    cout << "szoke";
    }

}
