#include <iostream>

using namespace std;

struct tgl {
	int d;
	int m;
	int y;
};

int jmlhari [13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
struct tgl_skrg;
string bulan[]={"salah","januari","februari","maret","april","mei","juni","juli","agustus","september","oktober","november","desember"};

int main() {
    cout << " ============================================= \n";
    cout << " \t===== PROGRAM STRUCT NEXTDAY ===== \n";
    cout << " ============================================= \n";
    tgl skrg, bsk;
mulai:
	cout << "Masukan Tanggal : (dd mm yy) \n";
	cin >> skrg.d;
	cin >> skrg.m;
	cin >> skrg.y;
	if(skrg.y % 4==0 || skrg.y%400==0){
		jmlhari[2]=29;
	} else {
		jmlhari[2]=28;
	}
	if( skrg.d > jmlhari[skrg.m] || skrg.m > 12 || skrg.m < 1){
		cout << "\nFormat salah, coba ulang\n";
		goto mulai;
	}
	cout << " ============================================= \n";
    cout << "Tanggal Hari Ini: \n";
	cout << "\t" << skrg.d << " " << bulan[skrg.m] << " " << skrg.y << endl;
    cout << "Tanggal Besok : \n";
	
	if(skrg.d < jmlhari[skrg.m]){
		bsk.d = skrg.d +1; //tanggal besok = tanggal hari ini+1
		bsk.m = skrg.m;
		bsk.y = skrg.y;
    } else if(skrg.m == 12){ 
		//jika ini bulan di akhir tahun dan hari terakhir di bulan itu
	 	bsk.d = 1; 
		bsk.m = 1;
		bsk.y = skrg.y + 1;
    } else{ 
		//jika hari terakhir
	 	bsk.d = 1;
		bsk.m = skrg.m + 1;
		bsk.y = skrg.y;
    }
    cout << "\t" << bsk.d << " " << bulan[bsk.m] << " " << bsk.y << endl;
	cout << " ============================================= \n";
	int x;
coba:
	cout << "Lagi(?) [1.yes/2.no]\n";
	cin >> x;
	cout << endl;
	switch(x){
		case 1:
			goto mulai;
			break;
		case 2:
			cout << " ============================================= \n";
			cout << "\nSee U Later:)\n";
	}
}


