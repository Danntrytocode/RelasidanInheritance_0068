#ifndef IBU_H
#define IBU_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;


class anak;

//create class ibu pada file header ibu.h
class ibu{
public:
    //deklarasi member
    string nama;
    vector<anak*> daftar_anak;
    //create constructor dan destructor pada class ibu
    ibu(string pnama) : nama(pnama) {
        cout << "Ibu \"" << nama << "\" ada\n";
    }
    ~ibu() {
        cout << "Ibu \"" << nama << "\" tidak ada\n";
    }
    void tambahAnak(anak*);
    void cetakAnak();
};

/*
class anak {
public:
    string nama;
    anak(string pnama) : nama(pnama) {}
};*/
//pendefinisian prosedur - prosedur pada class ibu di luar class
void ibu::tambahAnak(anak* panak) {
    daftar_anak.push_back(panak);
}
void ibu::cetakAnak(){
    cout << "Daftar Anak dari Ibu \"" << this->nama << "\":\n";
    /*for (auto& a : daftar_anak){
        cout << a->nama << "\n";
    }*/
    for (int i = 0; i < daftar_anak.size(); i++){
        cout << daftar_anak[i]-> nama << endl;
    }
    cout << endl;
}
#endif