#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
    int nim;
    string nama;
public:
    mahasiswa() {
        nim = 187;
        nama = "";
    }

    mahasiswa(int iNim) {
        nim = iNim;
    }
    mahasiswa(string);
    mahasiswa(int iNim, string iNama);
    void cetak();

};

mahasiswa::mahasiswa(string iNama) {
    nim = 187;
    nama = iNama;
}

mahasiswa::mahasiswa(int iNim, string iNama) {
    nim = iNim;
    nama = iNama;
}

void mahasiswa::cetak() {
    cout << endl << "Nim =" << nim << endl;
    cout << " Nama " << nama << endl;
}

int main() {
    mahasiswa mhs1("apis star");
    mahasiswa mhs2("mino hapis");
    mahasiswa mhs3("xborg infidel");
    mahasiswa mhs4("fredin kempis");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();

    system("pause");

    return 0;
}