// TUGAS PRAKTIKUM_MTK EKONOMI.cpp : This file contains the 'main' function. Program execution begins and ends there.
// SALMA NIFTRINA HARDIANTI 121103015

#include <iostream>
#include <string>
#include<math.h>

using namespace std;

int main()
{
    float n1, n2, a, a2, i;
    string thun = "";
    double F, p, p2;
    F = 56700000;
    i = 0.06;
    n1 = 3;
    n2 = n1 * 2;
    a = pow((1+i), n1);
    a2 = pow((1 + i), n2);
    p = F / a;
    p2 = F / a2;

    cout << "Tabungan anda 3 tahun kemudian adalah Rp56.700.000" << endl;
    cout << "ketik 'lihat' untuk melihat tabungan anda saat ini : ";
    cin >> thun;
    if (thun == "lihat")
    {
        cout << endl; 
        cout << "Tabungan anda sebesar Rp" << fixed << p << endl;
    }
    cout << endl;
    cout << "Tabungan anda 3 tahun kemudian (dalam semester) adalah Rp56.700.000" << endl;
    cout << "ketik 'lihat' untuk melihat tabungan anda saat ini : ";
    cin >> thun;
    if (thun == "lihat")
    {
        cout << endl; 
        cout << "Tabungan anda sebesar Rp" << fixed << p2 << endl;
        return 0;
    }
}