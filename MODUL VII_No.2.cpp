// MODUL VII_No.2.cpp 
// SALMA NIFTRINA HARDINATI_121103015

#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Tabel Bintang dengan 5 baris\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    
}

