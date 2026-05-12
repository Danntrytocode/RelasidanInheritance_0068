#include <iostream>
#include <string>
using namespace std;

class orang{
public:
    //deklarasi variabel
    string nama;
    //make constructor and destructor
    orang(string pNama) :
        nama(pNama) {
        cout << "orang dibuat\n" << endl;
    }

    ~orang() {
        cout << "orang dihapus\n" << endl;
    }
    //pembuatan function jumlah
    int jumlah(int a, int b) {
        return a + b;
    }
};

//pembuatan class pelajar sebagai pewaris dari class orang
class pelajar : public orang {
public:
    string sekolah;
    //pembuatan constructor dan destructor dari class pelajar
    pelajar(string pNama, string pSekolah) : orang(pNama), sekolah(pSekolah) {
        cout << "pelajar dibuat\n" << endl;
    }

    ~pelajar() {
        cout << "pelajar dihapus\n" << endl;
    }
    //pembuatan function perkenalan
    string perkenalan() {
        return "Hallo, nama saya " + nama + " dari sekolah " + sekolah + "\n\n";
    }
};

int main(){
    //deklarasi dan pemberian nilai
    pelajar siswa1("Rendi Pajero", "SMAN 1 Bantul");
    //pemanggilan function perkenalan dri class pelajar
    cout << siswa1.perkenalan();
    //pemanggilan function warisan dari class orang kepada class object
    cout << "Hasil = " << siswa1.jumlah(10, 90) << endl;

    return 0;
};