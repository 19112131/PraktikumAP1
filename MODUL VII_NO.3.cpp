// MODUL VII_NO.3.cpp 
// Salma Niftrina Hardianti_121103015

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float s, a; int i;
    s = 0; a = 1;
    for (i = 1; i <= 1000; i++) {
        if (i % 2 == 0)
        {
            s += -(1 / a);
        }
        else {
            s += +(1 / a);
        }
        a++;
        cout << "S = " << s << endl;
    }
}
