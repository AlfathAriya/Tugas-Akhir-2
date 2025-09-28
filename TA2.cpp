#include <iostream>
using namespace std;

struct Mahasiswa { string nama, npm; };

void tukar(Mahasiswa &a, Mahasiswa &b) {
    Mahasiswa temp = a; 
    a = b; 
    b = temp;
}

int main() {
    int n;
    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n; cin.ignore();

    Mahasiswa mhs[n];
    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa " << i+1 << endl;
        cout << "Nama : "; getline(cin, mhs[i].nama);
        cout << "NPM  : "; getline(cin, mhs[i].npm);
    }

    // Bubble Sort berdasarkan NPM
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (mhs[j].npm > mhs[j+1].npm) tukar(mhs[j], mhs[j+1]);

    cout << "\n=== Data Mahasiswa setelah diurutkan (berdasarkan NPM) ===\n";
    for (int i = 0; i < n; i++)
        cout << i+1 << ". " << mhs[i].nama << " | " << mhs[i].npm << endl;
}
