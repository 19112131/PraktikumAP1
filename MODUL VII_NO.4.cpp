// MODUL VII_NO.4.cpp 
// SALMA NIFTRINA HARDIANTI_121103015

#include <iostream>

using namespace std;

int main()
{
    double F, i, n, a;
    cout << "Menghitung Faktorial n!\n";
    cout << "Masukan Nilai n: ";
    cin >> n;
    F = 1;
    for (i = 1; i <= n; i++) {
        F = F * i;
        
        cout << i << "! = "<< F << endl;
    }
}

