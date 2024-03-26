#include <iostream>
using namespace std;

int billa[43];
int n;

void input() {
    while (true) {
        cout << "masukan banyaknya elemen pada billa : ";
        cin >> n;
        if (n <= 43)
            break;
        else {
            cout << "\nbilla dapat mempunyai maksimal 34 elemen.\n";

        }
     }
    cout << endl;
    cout << "===============" << endl;
    cout << "masukan Elemen billa" << endl;
    cout << "===============" << endl;

    for (int i = 0; i < n; i++) {
        cout << "data ke-" << (i + 1) << ": ";
        cin >> billa[i];

    }

}

void selectionsort(){
    do {
        for (int j = 0; j <= n - 2; j++) { // step 1 memasukkan j dari 0 ke n - 2
                int min_index = j;
                if (billa[i] < billa[j] {
                    int billa[j] = billa [i];
                }


            }
        }
}

void display() {
    cout << endl;
    cout << "===================================" << endl;
    cout << "Element billa yang telah tersusun" << endl;
    cout << "===================================" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[j] << endl; // Output setiap element array pada garis baru

    }
    cout << "jumlah pass = " << n - 1 << endl; //menampilkan total angka dari elemen yang benar
    cout << endl;
}