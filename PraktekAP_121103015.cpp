#include <iostream>
#include <string>

using namespace std;

int main() {
    int nilai[10];
    int jumlah, h;
    //loop input
    int i = 0;
    for(i; i < 10; i++)
    {
        cout << "Masukkan nilai ke-" << i+1 << ": ";
        cin >> nilai[i]; 
    }
    cout << endl;
    
    //loop tampilan
    cout << "Isi data bilangan :" << endl;
    for (i=0; i < 10; i++) {
        cout << nilai[i] << " ";
    }
    cout << endl;
    cout <<"\n============================================================================"<<endl;
    //loop tampilan terurut
    cout <<"Kumpulan data bilangan terurut: "<<endl;
    int tmp;
    for(h=0; h<10; h++) {
        for(i=h+1; i<10; i++) {
            if(nilai[h] > nilai[i]) {
                tmp = nilai[i];
                nilai[i] = nilai[h];
                nilai[h] = tmp;
            }
        }
        cout << nilai[h] << " ";
    }
    cout <<"\n============================================================================"<<endl;
    cout <<"Banyak kemunculan data : " << endl;
    //Proses menghitung periode kemunculan
    for(h=0; h<10; h++) {
        jumlah = 0;
        for(i=0; i<10; i++) {
            if(nilai[h] == nilai[i])
            jumlah++;
        }
        //Menghindari program menampilkan angka yang sudah di tampilkan ke layar sebelumnya
        if(nilai[h] != nilai[h-1])
        cout <<"Nilai "<< nilai[h] << " : " << jumlah <<endl;
    }
    //jumlah dan rerata
	jumlah=0;
	for (i=0; i<10; i++) {
	    jumlah += nilai[i];
	}
	cout << "\nJumlah: " << jumlah << endl;
	float rerata = jumlah/10;
	cout << "Nilai Rata-rata: " << rerata << endl;
    return 0;
}