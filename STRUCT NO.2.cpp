#include <iostream>
#include <string>

using namespace std;

void n_ujian(float n_uas, float n_uts,  float n_tugas, float n_kuis);

struct data {
	int no;
	char nim[9];
	char nama[25];
} mahasiswa;

float ntotal;
char huruf;

int main () {
	int j, jml;
	float a, b, c, d ;
	cout << "==========================================================\n";
	cout << "Program Menghitung Nilai Mahasiswa Beserta Indeks Kelulusan\n";
	cout << "\n==========================================================\n";
	cout << "Masukkan jumlah mahasiswa : ";
	cin >> jml;
	
	for (j=1; j<=jml; j++){
	cout << "\nData Mahasiswa ke-" << j;
	mahasiswa.no=j;
	cout << endl;
	cout << "\nDATA MAHASISWA\n";
	cout << "Masukkan NIM  : ";
	cin >> mahasiswa.nim;
	cout << "Masukkan Nama  : ";
	cin >> mahasiswa.nama;
	cout << "Mata kuliah Algortima & Pemograman I\n";
	cout << "\tMasukkan Nilai UAS  : ";
	cin >> a;
	cout << "\tMasukan Nilai UTS  : ";
	cin >> b;
	cout << "\tMasukan Nilai Tugas  : ";
	cin >> c;
	cout << "\tMasukan Nilai Kuis  : ";
	cin >> d;
	n_ujian(a,b,c,d);
	}

return 0;
}

void n_ujian(float n_uas, float n_uts, float n_tugas, float n_kuis) {
ntotal = (n_uas + n_uts + n_tugas + n_kuis)/4;
cout << "\nNilai Akhir adalah : " << ntotal <<  endl;
if ( ntotal > 90 ) {
		huruf = 'A';
	} else if (ntotal > 80) {
		huruf='B';
	} else if (ntotal > 70) {
		huruf='C';
	} else if (ntotal < 70) {
		huruf='D';
	} 

cout << "Indeks Nilai Mahasiswa Atas Nama " << mahasiswa.nama << " adalah " << huruf << endl;
cout << "========================================================\n";
}

