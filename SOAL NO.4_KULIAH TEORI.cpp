// SOAL NO.4_KULIAH TEORI.cpp : This file contains the 'main' function. Program execution begins and ends there.
// SALMA NIFTRINA HARDIANTI_121103015

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
    string nama = "", gol = "";
    float jmlh_jam, totalpj, totalgji, gjittp, gjpj;
    int x;

    //input maning:')
    cout << "MENGHITUNG GAJI KARYAWAN BULANAN" << endl << endl;
    cout << " Ketik Nama Karyawan: ";
    cin >> nama; 
    cout << "Ketik Golongan Gaji Anda (Range 1 sampai 5): ";
    cin >> gol;
    cout << "Ketik Jumlah Jam Kerja Anda Bulan Ini: ";
    cin >> jmlh_jam; 
    cout << endl; 
    cout << "Mohon Tunggu Sebentar " << "Sedang Diproses" << endl;
    cout << "............." << endl;

    // mari kita puyeng-puyeng kawan  
    if (gol == "1")
    {
        gjittp = 1000000;
        gjpj = 10000;
    }
    if (gol == "2") 
    {
        gjittp = 2000000;
        gjpj = 20000;
    }
    if (gol == "3") 
    {
        gjittp = 3000000;
        gjpj = 30000;
    }
    if (gol == "4")
    {
        gjittp = 4000000;
        gjpj = 40000;
    }
    if (gol == "5")
    {
        gjittp = 5000000;
        gjpj = 50000;
    }
    //markicob perhitungannya euuyy
    x = jmlh_jam - 150;
    totalpj = x * gjpj;
    totalgji = gjittp + totalpj;

    // akhirnya output jugak:))
    cout << "Nama : " << nama << endl;
    cout << "Golongan: " << gol << endl;
    cout << "Jumlah Jam Kerja Bulan Ini " << jmlh_jam << "jam" << endl; 
    cout << "Gaji Per Jam Rp" << gjpj << endl;
    cout << "Gaji Tetap Anda Sebesar Rp" << fixed << gjittp << endl;
    cout << "Jumlah Jam Lembur Anda " << x << "jam" << endl;
    cout << "Total Gaji Lembur Anda Bulan Ini sebesar Rp" << totalpj << endl;
    cout << "Total Gaji Anda Bulan Ini Sebesar Rp" << fixed << totalgji << endl << endl;
    return 0;
    //SELESAIIII HAHAHAHAHAHAHAHA
}
