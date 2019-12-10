#include <iostream>

#include <string>



using namespace std;



int main()

{
    string a,b="mpm";
    cin >> a;
for (size_t i = 0; i < a.size(); ++i) {
    if (a[i] == 'm') {
        a.insert(i,  "pm");}
    }



cout << a;
}
