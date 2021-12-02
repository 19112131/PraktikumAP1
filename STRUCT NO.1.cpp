#include <iostream>
#include <string>

using namespace std;

struct hitung {
    int pemb;//pembilang
    int peny;//penyebut
};

int main (){
	hitung x, y, hasil1, hasil2, hasil3, hasil4; 
	int temp = 0;
	
	cout << "==== PROGRAM MENGHITUNG PECAHAN ====\n";
	cout << "====================================\n";
	cout << endl;
	cout << "Masukan pembilang dan penyebut dari 2 pecahan {Bentuk A/B dan C/D} :\n" << endl;
	cout << "Masukan Pembilang dan Penyebut pecahan 1: \n";
	cin >> x.pemb; cout << "/\n"; cin >> x.peny;
	cout << endl;
	cout << "Masukan Pembilang dan Penyebut pecahan 2: \n";
	cin >> y.pemb; cout << "/\n"; cin >> y.peny;
	        
    /*x.pemb = 2;
    x.peny = 7;
    y.pemb = 4;
    y.peny = 3;*/
    
    cout << "Pecahan yang ingin dihitung: \n";
    cout << x.pemb << '/' << x.peny << " & " << y.pemb << '/' << y.peny << endl;
    cout << "====================================\n" << endl;
	//penjumlahan
    cout << "Penjumlahan Pecahan: \n";
    if (x.peny == y.peny){
    	hasil1.pemb = x.pemb + y.pemb;
    	hasil1.peny = x.peny;
	} else {
		temp += x.pemb * y.peny;
		temp += y.pemb * x.peny;
		hasil1.pemb = temp;
		hasil1.peny = x.peny * y.peny;
	}
	cout << hasil1.pemb << '/' << hasil1.peny << endl;
	cout << endl;
	//pengurangan
	cout << "Pengurangan Pecahan: \n";
	if (x.peny == y.peny){
    	hasil2.pemb = x.pemb - y.pemb;
    	hasil2.peny = x.peny;
	} else {
		hasil2.pemb = x.pemb * y.peny;
		hasil2.pemb -= y.pemb * x.peny;
		hasil2.peny = x.peny * y.peny;
	}
	cout << hasil2.pemb << '/' << hasil2.peny << endl;
	cout << endl;
	//perkalian
	cout << "Perkalian Pecahan: \n";
	hasil3.pemb = x.pemb * y.pemb;
	hasil3.peny = x.peny * y.peny;
	cout << hasil3.pemb << '/' << hasil3.peny << endl;
	cout << endl;
	//pembagian
	cout << "Pembagian Pecahan: \n";
	hasil4.pemb = x.pemb * y.peny;
	hasil4.peny = x.peny * y.pemb;
	cout << hasil4.pemb << '/' << hasil4.peny << endl;
	cout << endl;


}
