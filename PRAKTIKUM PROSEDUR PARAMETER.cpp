// PRAKTIKUM PROSEDUR PARAMETER.cpp 
// SALMA NIFTRINA HARDIANTI_121103015

#include <iostream>
#include <math.h>
#include <conio.h>
#include <string>

using namespace std;
int tabungan = 10000000;

void saldo()
{
    cout << "Saldo Anda Saat Ini Adalah Rp. " << tabungan << endl;
    cout << endl;
}
int penarikan()
{
    int tarik;
narik:
    cout << "Masukkan Nominal yang ingin Anda Tarik = Rp. ";
    cin >> tarik;
    if (tarik > tabungan) {
        cout << "Saldo Anda tidak Cukup!" << endl;
        goto narik;
    }
    else {
        tabungan -= tarik;
        cout << "Sisa Saldo Anda Saat Ini Rp. " << tabungan << endl;
    }
    return 0;
}

int Topup()
{
    int topup;
    cout << "Masukkan Nominal Top-up yang Anda inginkan = Rp. ";
    cin >> topup;
    tabungan += topup;
    cout << "Jumlah Saldo Anda Saat Ini Adalah = Rp. " << tabungan << endl;
    return 0;
}

void keluar()
{
    cout << "====================================" << endl;
    cout << "============TERIMA KASIH============" << endl;
    cout << "======= SAMPAI JUMPA KEMBALI =======" << endl;
    cout << "====================================" << endl;
};

int main()
{
    string pw = "";
    cout << "========================================" << endl;
    cout << "============ ATM BANK PINTAR ===========" << endl;
    cout << "========================================" << endl;
    cout << endl;
    cout << "========================================" << endl;
pin:
    cout << endl;
    cout << "Masukan Pin 4 digit anda: ";
    cin >> pw;
    cout << endl;
    if (pw != "1234") {
        cout << "PIN ANDA SALAH!" << endl;
        goto pin;
        return 0;
    }
    cout << "============ SELAMAT DATANG ============" << endl;
awal:
    int Milih;
    cout << "========================================" << endl;
    cout << endl;
    cout << " ketik '1' CEK SALDO" << endl;
    cout << " ketik '2' TARIK SALDO" << endl;
    cout << " ketik '3' TOP-UP SALDO" << endl;
    cout << " ketik '4' KELUAR" << endl;
    cout << "Masukkan pilihan anda : ";
    cin >> Milih;

    switch (Milih)
    {
    case 1:
        system("cls");
        saldo();
        goto awal;
        break;

    case 2:
        system("cls");
        penarikan();
        goto awal;
        break;

    case 3:
        system("cls");
        Topup();
        goto awal;
        break;

    case 4:
        system("cls");
        keluar();
    };
}
