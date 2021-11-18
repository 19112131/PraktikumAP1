#include <iostream>

using namespace std;

int main() {
    int X, i; bool found;
    int TabInt[20];
    int indeks;
    for (i=0; i < 20; i++) {
        TabInt[i] = i;
    }
    for (i=0; i < 20; i++) {
        cout << "Array ke-" << i+1 << " = " << TabInt[i] << endl;
    }
    cout << endl;
    cout << "masukan angka yang ingin dicari: ";
    cin >> X;
    i = 0; found = false;
    while ((i<20) && (!found)) {
        if (TabInt[i]==X) {
            found = true;
            indeks = i+1;
        } else {
            i++;
        }
    }
    if (found) {
        cout << X << " ditemukan di array ke-" << indeks;
    } else {
        cout << X << " Tidak ditemukan";
    }
    return 0;
}
