// Praktikum no.1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Salma_Niftrina_Hardianti_121103015

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    int n1, n2, n3;
    n1 = 80;
    n2 = 85;
    n3 = 90;
    int rata;

    rata = (n1 + n2 + n3) / 3;
    cout << "Data nilai Mahasiswa beserta rata-ratanya" << endl;
    cout << endl;
    cout << "Nilai Tugas = " << n1 << endl;
    cout << "Nilai Ujian Tengah Semester = " << n2 << endl;
    cout << "Nilai Ujian Akhir = " << n3 << endl;
    cout << endl;
    cout << "Rata-rata nilai Mahasiswa adalah " << rata << endl;

    return 0;
}


